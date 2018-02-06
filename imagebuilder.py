import os
import capnp

import image_capnp
import time
from math import *
from numbers import Number
import random as __random

class ImageBuffer:

    def __init__(self, name):
        self.message = image_capnp.Image.new_message(shortname=name, id=0)
        self.commands = []

    def addCommand(self, cmd, values):
        self.commands.append((cmd, values))

    def flush(self, timestamp, handle):
        self.message.timestamp = int(timestamp)
        self.message.init('commands', len(self.commands))
        for i in range(0, len(self.commands)):
            cmd = self.commands[i]
            pcmd = self.message.commands[i]
            pcmd.init('values', len(cmd[1]))
            # fill command
            for j in range(0, len(cmd[1])):
                pcmd.values[j] = cmd[1][j]
            try:
                pcmd.cmd.type = cmd[0]
            except:
                pcmd.cmd.state = cmd[0]
        self.message.write_packed(handle)

img = ImageBuffer("sketch")
def scale(*args):
	global img
	img.addCommand('scale', [float(x) for x in args])
def translate(*args):
	global img
	img.addCommand('translate', [float(x) for x in args])
def rotate(*args):
	global img
	img.addCommand('rotate', [float(x) for x in args])
def stroke(*args):
	global img
	img.addCommand('stroke', [float(x) for x in args])


def random(start, stop):
	return __random.uniform(start,stop)


class PVector():
    def __instance_add__(self, *args):
        if len(args) == 1:
            v = args[0]
            self.x += v.x
            self.y += v.y
            self.z += v.z
        else:
            self.x += args[0]
            self.y += args[1]
            self.z += args[2]
        return self
        
    def __instance_sub__(self, *args):
        if len(args) == 1:
            v = args[0]
            self.x -= v.x
            self.y -= v.y
            self.z -= v.z
        else:
            self.x -= args[0]
            self.y -= args[1]
            self.z -= args[2]
        return self

    def __instance_mult__(self, o):
        return PVector.mult(self, o, self)

    def __instance_div__(self, f):
        return PVector.div(self, f, self)

    def __instance_cross__(self, o):
        return PVector.cross(self, o, self)

    def __init__(self, x=0, y=0, z=0):
        (self.x, self.y, self.z) = (x, y, z)
        self.add = self.__instance_add__
        self.sub = self.__instance_sub__
        self.mult = self.__instance_mult__
        self.div = self.__instance_div__
        self.cross = self.__instance_cross__

    def get(self):
        return PVector(self.x, self.y, self.z)

    def copy(self):
        return PVector(self.x, self.y, self.z)

    def __copy__(self):
        return PVector(self.x, self.y, self.z)

    def __deepcopy__(self, memo):
        return PVector(self.x, self.y, self.z)

    @classmethod
    def add(cls, a, b, dest=None):
        if dest is None:
            return PVector(a.x + b.x, a.y + b.y, a.z + b.z)
        dest.set(a.x + b.x, a.y + b.y, a.z + b.z)
        return dest
    
    @classmethod
    def sub(cls, a, b, dest=None):
        if dest is None:
            return PVector(a.x - b.x, a.y - b.y, a.z - b.z)
        dest.set(a.x - b.x, a.y - b.y, a.z - b.z)
        return dest

    @classmethod
    def mult(cls, a, b, dest=None):
        if dest is None:
            return PVector(a.x * b, a.y * b, a.z * b)
        dest.set(a.x * b, a.y * b, a.z * b)
        return dest

    @classmethod
    def div(cls, a, b, dest=None):
        if dest is None:
            return PVector(a.x / b, a.y / b, a.z / b)
        dest.set(a.x / b, a.y / b, a.z / b)
        return dest

    @classmethod
    def cross(cls, a, b, dest=None):
        x = a.y * b.z - b.y * a.z
        y = a.z * b.x - b.z * a.x
        z = a.x * b.y - b.x * a.y
        if dest is None:
            return PVector(x, y, z)
        dest.set(x, y, z)
        return dest

    def __add__(a, b):
        return PVector.add(a, b, None)

    def __sub__(a, b):
        return PVector.sub(a, b, None)
    
    def __isub__(a, b):
        a.sub(b)
        return a
    
    def __iadd__(a, b):
        a.add(b)
        return a
    
    def __mul__(a, b):
        if not isinstance(b, Number):
            raise TypeError("The * operator can only be used to multiply a PVector by a number")
        return PVector.mult(a, float(b), None)
    
    def __rmul__(a, b):
        if not isinstance(b, Number):
            raise TypeError("The * operator can only be used to multiply a PVector by a number")
        return PVector.mult(a, float(b), None)
    
    def __imul__(a, b):
        if not isinstance(b, Number):
            raise TypeError("The *= operator can only be used to multiply a PVector by a number")
        a.mult(float(b))
        return a
    
    def __div__(a, b):
        if not isinstance(b, Number):
            raise TypeError("The / operator can only be used to divide a PVector by a number")
        return PVector.div(a, float(b), None)
    
    def __idiv__(a, b):
        if not isinstance(b, Number):
            raise TypeError("The /= operator can only be used to divide a PVector by a number")
        a.div(float(b))
        return a
    
    def __eq__(a, b):
        return a.x == b.x and a.y == b.y and a.z == b.z
    
    def __lt__(a, b):
        return a.magSq() < b.magSq()
    
    def __le__(a, b):
        return a.magSq() <= b.magSq()
    
    def __gt__(a, b):
        return a.magSq() > b.magSq()
    
    def __ge__(a, b):
        return a.magSq() >= b.magSq()
def lerp(v0,v1,t):
	return (1 - t) * v0 + t * v1;