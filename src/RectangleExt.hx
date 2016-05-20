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
        var hit:HitStatic = {hit:false, collider: rect, pos: new Vector(), normal: new Vector(), delta: new Vector(), time:0};

        var dx:Float = point.x - rect.mid().x;
        var px:Float = rect.half().x - Math.abs(dx);
        if( px <= 0 ) return hit;

        var dy:Float = point.y - rect.mid().y;
        var py:Float = rect.half().y - Math.abs(dy);
        if( py <= 0 ) return hit;

        if( py > px )
        {
            var sx:Float = if (dx < 0) -1 else 1;
            hit.hit = true;
            hit.delta.x = px * sx;
            hit.normal.x = sx;
            hit.pos.x = rect.mid().x + rect.half().x * sx;
            hit.pos.y = point.y;
        }
        else
        {
            var sy:Float = if (dy < 0) -1 else 1;
            hit.hit = true;
            hit.delta.y = py * sy;
            hit.normal.y = sy;
            hit.pos.y = rect.mid().y + rect.half().y * sy;
            hit.pos.x = point.x;
        }
        return hit;
    }

    public static function intersectSegment(rect:Rectangle, origin:Vector, delta:Vector) : HitStatic
    {
        var hit:HitStatic = {hit:false, collider: rect, pos: new Vector(), normal: new Vector(), delta: new Vector(), time: 0};

        var scaleX:Float = 1.0 / delta.x;
        var scaleY:Float = 1.0 / delta.y;
        var signX:Float = if (scaleX < 0) -1 else 1;
        var signY:Float = if (scaleY < 0) -1 else 1;
        var nearTimeX:Float = (rect.mid().x - signX * rect.half().x - origin.x) * scaleX;
        var nearTimeY:Float = (rect.mid().y - signY * rect.half().y - origin.y) * scaleY;
        var farTimeX:Float = (rect.mid().x + signX * rect.half().x - origin.x) * scaleX;
        var farTimeY:Float = (rect.mid().y + signY * rect.half().y - origin.y) * scaleY;

        if (nearTimeX > farTimeY || nearTimeY > farTimeX) return hit;

        var nearTime:Float = if (nearTimeX > nearTimeY) nearTimeX else nearTimeY;
        var farTime:Float = if (farTimeX > farTimeY) farTimeX else farTimeY;

        if (nearTime >= 1 || farTime <= 0) return hit;

        hit.time = Math.min(Math.max(0, nearTime), 1);
        if( nearTimeX > nearTimeY )
        {
            hit.normal.x = -signX;
        }
        else
        {
            hit.normal.y = -signY;
        }
        hit.delta.x = hit.time * delta.x;
        hit.delta.y = hit.time * delta.y;
        hit.pos.x = origin.x + hit.delta.x;
        hit.pos.y = origin.y + hit.delta.y;
        hit.hit = true;
        return hit;
    }
}
