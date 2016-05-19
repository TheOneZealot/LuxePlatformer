import luxe.Rectangle;
import luxe.Vector;
import AABBPhysics;
using RectangleExt;

class RectangleExt
{
    public static function mid(rect:Rectangle) : Vector
    {
        return new Vector(rect.x + rect.w / 2, rect.y + rect.h / 2);
    }

    public static function half(rect:Rectangle) : Vector
    {
        return new Vec(rect.w / 2, rect.h / 2);
    }

    public static function intersectPoint(rect:Rectangle, point:Vector) : HitStatic
    {
        var hitResult:HitStatic = {hit:false, collider: rect, pos: new Vector(), normal: new Vector(), delta: new Vector()};

        var dx:Float = point.x - rect.mid().x;
        var px:Float = rect.half().x - Math.abs(dx);
        if( px <= 0 ) return hitResult;

        var dy:Float = point.y - rect.mid().y;
        var py:Float = rect.half().y - Math.abs(dy);
        if( py <= 0 ) return hitResult;

        if( py > px )
        {
            var sx:Float = if (dx < 0) -1 else 1;
            hitResult.hit = true;
            hitResult.delta.x = px * sx;
            hitResult.normal.x = sx;
            hitResult.pos.x = rect.mid().x + rect.half().x * sx;
            hitResult.pos.y = point.y;
        }
        else
        {
            var sy:Float = if (dy < 0) -1 else 1;
            hitResult.hit = true;
            hitResult.delta.y = py * sy;
            hitResult.normal.y = sy;
            hitResult.pos.y = rect.mid().y + rect.half().y * sy;
            hitResult.pos.x = point.x;
        }
        return hitResult;
    }

    public static function intersectSegment(rect:Rectangle, origin:Vector, delta:Vector) : HitStatic
    {
        var hitResult:HitStatic = {hit:false, collider: rect, pos: new Vector(), normal: new Vector(), delta: new Vector()};

        var scaleX:Float = 1.0 / delta.x;
        var scaleY:Float = 1.0 / delta.y;
        var signX:Float = if (scaleX < 0) -1 else 1;
        var signY:Float = if (scaleY < 0) -1 else 1;
        var nearTimeX:Float = (rect.mid().x - signX * rect.half().x - origin.x) * scaleX;
        var nearTimeY:Float = (rect.mid().y - signY * rect.half().y - origin.y) * scaleY;
        var farTimeX:Float = (rect.mid().x + signX * rect.half().x - origin.x) * scaleX;
        var farTimeY:Float = (rect.mid().y + signY * rect.half().y - origin.y) * scaleY;

        if (nearTimeX > farTimeY || nearTimeY > farTimeX) return hitResult;

        var nearTime:Float = if (nearTimeX > nearTimeY) nearTimeX else nearTimeY;
        var farTime:Float = if (farTimeX > farTimeY) farTimeX else farTimeY;

        if (nearTime >= 1 || farTime <= 0) return hitResult;

        return hitResult;
    }
}
