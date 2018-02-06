from imagebuilder import *
def line(a,b,c,d):
    pass

def plerp(a, b, t):
    return PVector(lerp(a.x, b.x, t), lerp(a.y, b.y, t))

def ptri(a,b,c):
    global img
    img.addCommand("polygon", [a.x,a.y,b.x,b.y,c.x,c.y])
    pline(a, b)
    pline(b, c)
    pline(c, a)

def pline(a, b):
    line(a.x, a.y, b.x, b.y)

def triangulate(a, b, c, args, todraw, coalesce=.1):
    if(args >= 1):
        
        center = (a+b+c)/3.0
        a = plerp(a, center, coalesce)
        b = plerp(b, center, coalesce)
        c = plerp(c, center, coalesce)
        #strokeWeight(args * 2);
        #pstroke(plerp( PVector(250, 87, 27), PVector(0,0,0), args/depth));
        if(todraw):
            ptri(a,b,c)
        d = random(shard, 1 - shard)
        e = random(shard, 1 - shard)
        f = random(shard, 1 - shard)
        

        (u, v, w) = (plerp(a, b, d), plerp(b, c, e), plerp(c, a, f))
        triangulate(a, u, w, args - random(1, 1.8),
                    True, random(inflate, deflate) + coalesce)
        triangulate(b, u, v, args - random(1, 1.8),
                    True, random(inflate, deflate) + coalesce)
        triangulate(c, v, w, args - random(1, 1.8),
                    True, random(inflate, deflate) + coalesce)
        triangulate(u, v, w, args - random(1, 1.8),
                    False, random(inflate, deflate) + coalesce)

h = 450
_h= 500
minSides = 4
squares = 3
depth = 4
depthStrides = 1.4
skew = random(.2,.7)
shard = .20
inflate = 0
deflate = 0

def drawShard(t):
    translate(_h*(t/squares)*2 + _h, _h*(t % squares) * 2 + _h)
    rotate(t)
    stroke(250, 87, 27)
    sides = minSides + (t/squares)
    di = 6.28/sides
    theta = random(0, 360)
    c = PVector(sin(theta)*h*skew, cos(theta)*h*skew)
    a = PVector(sin(0)*h, cos(0)*h)
    for i in range(1, sides+1):
        b = PVector(sin(i*di)*h, cos(i*di)*h)
        triangulate(a, b, c, depth + (t % squares)* depthStrides, True, .0)
        a = b
    translate(-(_h*(t/squares)*2 + _h), -( _h*(t % squares) * 2 + _h))


def setup():
    size(900, 900)
    background(20, 10, 7)

if __name__ == '__main__':
    global img
    scale(1.0/squares)
    for i in range(0,squares*squares):
        drawShard(i)

    img.flush(time.time(), open("dumps" + str(time.time()) + ".blob", "wb"))
