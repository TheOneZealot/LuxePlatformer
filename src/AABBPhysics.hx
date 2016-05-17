import luxe.Physics.PhysicsEngine;
import luxe.Rectangle;
import luxe.Color;
import luxe.Vector;
using RectangleExt;

typedef HitStatic = {
    hit: Bool,
    collider: Rectangle,
    pos: Vector,
    delta: Vector,
    normal: Vector
};

class AABBPhysics extends PhysicsEngine
{
    public var staticBodies : Array<Rectangle>;

    override public function init()
    {
        staticBodies = new Array<Rectangle>();
    }

    override public function render()
    {
        if (!draw) return;
        for( rect in staticBodies )
        {
            Luxe.draw.rectangle({
                immediate: true,
                rect: rect,
                color: new Color(1, 1, 1, 1)
            });
        }
    }

    public function intersectPoint(point:Vector) : Void
    {
        for( rect in staticBodies )
        {
            rect.intersectPoint(point);
        }
    }
}
