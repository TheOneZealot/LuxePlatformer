import luxe.GameConfig;
import luxe.Input;
import luxe.Sprite;
import luxe.Parcel;
import luxe.ParcelProgress;
import luxe.Color;
import luxe.Vector;
import luxe.Rectangle;
import luxe.collision.shapes.Shape;
import luxe.collision.shapes.Polygon;
import luxe.collision.shapes.Ray;
import luxe.physics.nape.PhysicsNape;
import phoenix.Texture;
import nape.;

class Main extends luxe.Game
{
    static var physics:PlatformerPhysics;

    var player:Sprite;
    var speed:Float = 128;
    var colliders:Array<Shape>;
    var mpos:Vector;
    var mdown:Bool;
    var mdownpos:Vector;

    override function config(config:GameConfig)
    {
        config.window.title = 'luxe game';
        config.window.width = 960;
        config.window.height = 640;
        config.window.fullscreen = false;

        return config;
    }

    override function ready()
    {
        var parcel = new Parcel({});

        new ParcelProgress({
            parcel:parcel,
            background:new Color(1, 1, 1, 0.85),
            oncomplete:assetsloaded
        });

        parcel.load();
    }

    function assetsloaded( _ ) : Void
    {
        physics = Luxe.physics.add_engine(PlatformerPhysics);

        player = new Sprite({
            name: "player",
            pos: new Vector(64, 64),
            color: new Color().rgb(0xf94b04),
            size: new Vector(128, 128)
        });

        colliders = [
            Polygon.rectangle(384, 384, 256, 256),
            Polygon.rectangle(512, 256, 256, 256)
        ];

        physics.staticBodies = physics.staticBodies.concat(colliders);

        Luxe.input.bind_key("up", Key.key_w);
        Luxe.input.bind_key("left", Key.key_a);
        Luxe.input.bind_key("down", Key.key_s);
        Luxe.input.bind_key("right", Key.key_d);
    }

    override function onmousemove( e:MouseEvent )
    {
        mpos = e.pos;
        if (mdown == false)
        {
            mdownpos = mpos;
        }
    }

    override function onmousedown( e:MouseEvent )
    {
        mdown = true;
    }

    override function onmouseup( e:MouseEvent )
    {
        mdown = false;
    }

    override function onkeyup( e:KeyEvent )
    {
        if(e.keycode == Key.escape) {
            Luxe.shutdown();
        }
    }

    override function update( dt:Float )
    {
        if( player == null ) return;

        if( Luxe.input.inputdown("up") )
        {
            player.pos.y -= speed * dt;
        }
        if( Luxe.input.inputdown("left") )
        {
            player.pos.x -= speed * dt;
        }
        if( Luxe.input.inputdown("down") )
        {
            player.pos.y += speed * dt;
        }
        if( Luxe.input.inputdown("right") )
        {
            player.pos.x += speed * dt;
        }

        if (mpos != null && mdownpos != null)
        {
            if( mdown )
            {
                physics.raycast(new Ray(new Vector(), mpos, false));
            }
        }
    }
}
