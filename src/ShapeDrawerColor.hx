import luxe.collision.ShapeDrawer;
import luxe.Color;
import luxe.Vector;


class ShapeDrawerColor extends ShapeDrawer
{
    public var color : Color = new Color(1, 1, 1, 1);

    override public function drawLine(p0:Vector, p1:Vector, ?startPoint:Null<Bool>) : Void
    {
        Luxe.draw.line({
            immediate: true,
            p0: p0, p1: p1,
            color: color
        });
    }

}
