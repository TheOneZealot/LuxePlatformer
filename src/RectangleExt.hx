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

        if( py < px )
        {
            var sx:Float = if (dx < 0) -1 else 1;
            hitResult.delta.x = px * sx;
            hitResult.normal.x = sx;
            hitResult.pos.x = rect.mid().x + rect.half().x * sx;
            hitResult.pos.y = point.y;
        }
        else
        {
            var sy:Float = if (dy < 0) -1 else 1;
            
        }

        return hitResult;
    }
}
