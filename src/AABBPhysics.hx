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
    var pointTests : Array<Vector>;

    override public function init()
    {
        staticBodies = new Array<Rectangle>();
        pointTests = new Array<Vector>();
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

            for( point in pointTests )
            {
                var hit = rect.intersectPoint(point);
                var pointColor = new Color(0, 1, 0, 1);
                if (hit.hit)
                {
                    Luxe.draw.box({
                        immediate: true,
                        rect: new Rectangle(hit.pos.x - 1, hit.pos.y - 1, 2, 2),
                        color: new Color(1, 0, 0, 1)
                    });
                    pointColor = new Color(1, 1, 0, 1);
                }
                Luxe.draw.box({
                    immediate: true,
                    rect: new Rectangle(point.x - 1, point.y - 1, 2, 2),
                    color: pointColor
                });
            }
            pointTests = new Array<Vector>();
        }

    }

    public function intersectPoint(point:Vector) : HitStatic
    {
        pointTests = pointTests.concat([point]);
        var hit:HitStatic = {hit:false, collider: new Rectangle(), pos: new Vector(), normal: new Vector(), delta: new Vector()};
        for( rect in staticBodies )
        {
            if( hit.hit )
            {
                return hit;
            }
        }
        return hit;
    }
}
