import luxe.GameConfig;
import luxe.Input;
import luxe.Sprite;
import luxe.Parcel;
import luxe.ParcelProgress;
import luxe.Color;
import luxe.Vector;
import luxe.Rectangle;
import phoenix.Texture;
import AABBPhysics;
using RectangleExt;

class Main extends luxe.Game
{
    static var physics:AABBPhysics;

    var player:Sprite;
    var speed:Float = 128;
    var collider:Rectangle;
    var mpos:Vector;
    var hit:HitStatic;

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
        physics = Luxe.physics.add_engine(AABBPhysics);

        player = new Sprite({
            name: "player",
            pos: new Vector(64, 64),
            color: new Color().rgb(0xf94b04),
            size: new Vector(128, 128)
        });

        collider = new Rectangle();
        collider.set(256, 256, 256, 256);

        physics.staticBodies = physics.staticBodies.concat([collider]);

        Luxe.input.bind_key("up", Key.key_w);
        Luxe.input.bind_key("left", Key.key_a);
        Luxe.input.bind_key("down", Key.key_s);
        Luxe.input.bind_key("right", Key.key_d);
    }

    override function onmousemove( e:MouseEvent )
    {
        mpos = e.pos;
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

        if (mpos != null)
        {
            hit = physics.intersectPoint(mpos);
        }
    }
}
