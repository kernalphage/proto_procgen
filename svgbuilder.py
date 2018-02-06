import os
import sys
import capnp

import image_capnp
import time
import cairo

knownCommands = {}
def polygon(ctx, values):
	ctx.move_to(values[0], values[1])
	for i in range(0,len(values), 2):
		ctx.line_to(values[i], values[i+1])
	ctx.line_to(values[0], values[1])
	
def translate(ctx, values):
	print("translate" + ", ".join([str(x) for x in values]))
	ctx.translate(values[0], values[1])

def scale(ctx, t):
	s = list(t)
	if len(s) == 1:
		s.append(s[0])
	print("scale" + ", ".join([str(x) for x in s]))
	ctx.scale(s[0],s[1])
def rotate(ctx, t):
	ctx.rotate(t[0])

knownCommands["polygon"] = polygon
knownCommands["translate"] = translate
knownCommands["scale"] = scale
# knownCommands["rotate"] = rotate

def parseCommand(cmd, ctx):
	global knownCommands
	if cmd.cmd.which() == "state":
		task = cmd.cmd.state
	else:
		task = cmd.cmd.type

	task = str(task)
	if task in knownCommands:
		knownCommands[task](ctx, cmd.values)
	else:
		print("skipping task " + task + ", ".join([str(x) for x in cmd.values]))



f = open(sys.argv[1], 'rb')
image = image_capnp.Image.read_packed(f)

surface = cairo.SVGSurface(image.shortname + str(image.timestamp) + ".svg", 1000,1000)
context = cairo.Context(surface)
[parseCommand(c, context) for c in image.commands]

context.stroke()
