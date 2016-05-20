import luxe.Physics.PhysicsEngine;
import luxe.collision.shapes.Shape;
import luxe.collision.ShapeDrawerLuxe;
import luxe.collision.shapes.Ray;
import luxe.collision.data.RayCollision;
import luxe.collision.Collision;
import luxe.Vector;
import luxe.Color;
using luxe.collision.data.RayCollision;

class PlatformerPhysics extends PhysicsEngine
{
    var shapeDrawer:ShapeDrawerColor;

    public var staticBodies : Array<Shape>;

    override public function init()
    {
        shapeDrawer = new ShapeDrawerColor();
        staticBodies = new Array<Shape>();
    }

    override public function render()
    {
        if (!draw) return;

        for( shape in staticBodies )
        {
            shapeDrawer.color = new Color(1, 1, 1, 1);
            shapeDrawer.drawShape(shape);
        }
    }

    override public function update()
    {
        
    }

    public function raycast(ray:Ray) : RayCollision
    {
        var hits:Array<RayCollision> = Collision.rayWithShapes(ray, staticBodies);
        var hit:RayCollision = hits[0];
        for( col in hits )
        {
            if( col.start < hit.start )
            {
                hit = col;
            }
        }

        if( draw )
        {
            if( hit != null )
            {
                shapeDrawer.color = new Color(1, 0, 0, 1);
                shapeDrawer.drawLine(ray.start, hit.hitStart());
                shapeDrawer.color = new Color(0, 1, 0, 1);
                shapeDrawer.drawLine(hit.hitStart(), ray.end);
            }
            else
            {
                shapeDrawer.color = new Color(1, 0, 0, 1);
                shapeDrawer.drawLine(ray.start, ray.end);
            }
        }
        return hit;
    }
}
