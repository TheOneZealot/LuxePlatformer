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
    var segmentTests : Array<{origin:Vector, delta:Vector}>;

    override public function init()
    {
        staticBodies = new Array<Rectangle>();
        pointTests = new Array<Vector>();
        segmentTests = new Array<{origin:Vector, delta:Vector}>();
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

        for( point in pointTests )
        {
            var pointColor = new Color(0, 1, 0, 1);
            for( rect in staticBodies )
            {
                var hit = rect.intersectPoint(point);
                if (hit.hit)
                {
                    Luxe.draw.box({
                        immediate: true,
                        rect: new Rectangle(hit.pos.x - 1, hit.pos.y - 1, 2, 2),
                        color: new Color(1, 1, 0, 1)
                    });
                    pointColor = new Color(1, 0, 0, 1);
                }
                Luxe.draw.box({
                    immediate: true,
                    rect: new Rectangle(point.x - 1, point.y - 1, 2, 2),
                    color: pointColor
                });
            }
        }
        pointTests = new Array<Vector>();

        for( segment in segmentTests )
        {
            var segmentColor = new Color(0, 1, 0, 1);
            for( rect in staticBodies )
            {
                var hit = rect.intersectSegment(segment.origin, segment.delta);
                if( hit.hit )
                {
                    Luxe.draw.line({
                        immediate: true,
                        p0: segment.origin,
                        p1: new Vector(),
                        color: new Color(1, 1, 0, 1)
                    });
                    segmentColor = new Color(1, 0, 0, 1);
                }
                Luxe.draw.line({
                    immediate: true,
                    p0: segment.origin,
                    p1: segment.delta,
                    color: segmentColor
                });
            }
        }
        segmentTests = new Array<{origin:Vector, delta:Vector}>();
    }

    public function intersectPoint(point:Vector) : Array<HitStatic>
    {
        var hits:Array<HitStatic> = new Array<HitStatic>();
        pointTests.push(point);
        for( rect in staticBodies )
        {
            hits.push(rect.intersectPoint(point));
        }
        return hits;
    }

    public function intersectSegment(origin:Vector, delta:Vector) : Array<HitStatic>
    {
        var hits:Array<HitStatic> = new Array<HitStatic>();
        segmentTests.push({origin:origin, delta:delta});
        for( rect in staticBodies )
        {
            hits.push(rect.intersectSegment(origin, delta));
        }
        return hits;
    }
}
