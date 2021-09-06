package arm;
import iron.system.Input;
import iron.system.Time;
import iron.Scene;
import armory.trait.internal.CanvasScript;

class GamepadTester extends iron.Trait {
	var canvas:CanvasScript;
	var gamepad = Input.getGamepad(0);
	var inileftStickx = 0.0;
	var inileftSticky = 0.0;
	var inirightStickx = 0.0;
	var inirightSticky = 0.0;
	var gamepadnotcalibrated = true;

	public function new() {
		super();
		notifyOnInit(function() {
			canvas = Scene.active.getTrait(CanvasScript);
		});

		notifyOnUpdate(function() {
			if (gamepadnotcalibrated && (gamepad.leftStick.x!=0 || gamepad.leftStick.y!=0 || gamepad.rightStick.x!=0 || gamepad.rightStick.y!=0)) {
				inileftStickx = gamepad.leftStick.x;
				inileftSticky = gamepad.leftStick.y;
				inirightStickx = gamepad.rightStick.x;
				inirightSticky = gamepad.rightStick.y;
				gamepadnotcalibrated = false;
				trace("lx:"+inileftStickx);
				trace("ly:"+inileftSticky);
				trace("rx:"+inirightStickx);
				trace("ry:"+inirightSticky);
				canvas.getElement("gamepad-r3stick").color=-1;
				canvas.getElement("gamepad-l3stick").color=-1;
			}

			if ((gamepad.leftStick.y-inileftSticky>0.1) || (-gamepad.leftStick.y+inileftSticky>0.1) || (gamepad.leftStick.x-inileftStickx>0.1) || (-gamepad.leftStick.x+inileftStickx>0.1)) {
			if (gamepad.leftStick.y-inileftSticky>0.1) canvas.getElement("gamepad-l3stick").y=(-gamepad.leftStick.y-inileftSticky)*55; // UP
			if (-gamepad.leftStick.y+inileftSticky>0.1) canvas.getElement("gamepad-l3stick").y=(-gamepad.leftStick.y-inileftSticky)*55; // DOWN
			if (gamepad.leftStick.x-inileftStickx>0.1) canvas.getElement("gamepad-l3stick").x=(gamepad.leftStick.x+inileftStickx)*55; // RIGHT
			if (-gamepad.leftStick.x+inileftStickx>0.1) canvas.getElement("gamepad-l3stick").x=(gamepad.leftStick.x+inileftStickx)*55; // LEFT
			} else {
				canvas.getElement("gamepad-l3stick").x=0;
				canvas.getElement("gamepad-l3stick").y=0;
			}

			if ((gamepad.rightStick.y-inirightSticky>0.1) || (-gamepad.rightStick.y+inirightSticky>0.1) || (gamepad.rightStick.x-inirightStickx>0.1) || (-gamepad.rightStick.x+inirightStickx>0.1)) {
			if (gamepad.rightStick.y-inirightSticky>0.1) canvas.getElement("gamepad-r3stick").y=(-gamepad.rightStick.y-inirightSticky)*55; // UP
			if (-gamepad.rightStick.y+inirightSticky>0.1) canvas.getElement("gamepad-r3stick").y=(-gamepad.rightStick.y-inirightSticky)*55; // DOWN
			if (gamepad.rightStick.x-inirightStickx>0.1) canvas.getElement("gamepad-r3stick").x=(gamepad.rightStick.x+inirightStickx)*55; // RIGHT
			if (-gamepad.rightStick.x+inirightStickx>0.1) canvas.getElement("gamepad-r3stick").x=(gamepad.rightStick.x+inirightStickx)*55; // LEFT
			} else {
				canvas.getElement("gamepad-r3stick").x=0;
				canvas.getElement("gamepad-r3stick").y=0;
			}

			if (gamepad.down("cross")>0.0) canvas.getElement("gamepad-a").color=-1;
			if (gamepad.released("cross")==true) canvas.getElement("gamepad-a").color=16777215;
			
			if (gamepad.down("circle")>0.0) canvas.getElement("gamepad-b").color=-1;
			if (gamepad.released("circle")==true) canvas.getElement("gamepad-b").color=16777215;
			
			if (gamepad.down("square")>0.0) canvas.getElement("gamepad-x").color=-1;
			if (gamepad.released("square")==true) canvas.getElement("gamepad-x").color=16777215;
			
			if (gamepad.down("triangle")>0.0) canvas.getElement("gamepad-y").color=-1;
			if (gamepad.released("triangle")==true) canvas.getElement("gamepad-y").color=16777215;

			if (gamepad.down("up")>0.0) canvas.getElement("gamepad-up").color=-1;
			if (gamepad.released("up")==true) canvas.getElement("gamepad-up").color=16777215;
			
			if (gamepad.down("down")>0.0) canvas.getElement("gamepad-down").color=-1;
			if (gamepad.released("down")==true) canvas.getElement("gamepad-down").color=16777215;
			
			if (gamepad.down("left")>0.0) canvas.getElement("gamepad-left").color=-1;
			if (gamepad.released("left")==true) canvas.getElement("gamepad-left").color=16777215;
			
			if (gamepad.down("right")>0.0) canvas.getElement("gamepad-right").color=-1;
			if (gamepad.released("right")==true) canvas.getElement("gamepad-right").color=16777215;
			
			if (gamepad.down("share")>0.0) canvas.getElement("gamepad-share").color=-1;
			if (gamepad.released("share")==true) canvas.getElement("gamepad-share").color=16777215;
			
			if (gamepad.down("options")>0.0) canvas.getElement("gamepad-option").color=-1;
			if (gamepad.released("options")==true) canvas.getElement("gamepad-option").color=16777215;

			if (gamepad.down("r3")>0.0) canvas.getElement("gamepad-r3").color=-1;
			if (gamepad.released("r3")==true) canvas.getElement("gamepad-r3").color=16777215;
									
			if (gamepad.down("l3")>0.0) canvas.getElement("gamepad-l3").color=-1;
			if (gamepad.released("l3")==true) canvas.getElement("gamepad-l3").color=16777215;
			
			if (gamepad.down("r1")>0.0) canvas.getElement("gamepad-r1-rb").color=-1;
			if (gamepad.released("r1")==true) canvas.getElement("gamepad-r1-rb").color=16777215;
						
			if (gamepad.down("r2")>0.0) canvas.getElement("gamepad-r2-rt").color=-1;
			if (gamepad.released("r2")==true) canvas.getElement("gamepad-r2-rt").color=16777215;
						
			if (gamepad.down("l1")>0.0) canvas.getElement("gamepad-l1-lb").color=-1;
			if (gamepad.released("l1")==true) canvas.getElement("gamepad-l1-lb").color=16777215;
						
			if (gamepad.down("l2")>0.0) canvas.getElement("gamepad-l2-lt").color=-1;
			if (gamepad.released("l2")==true) canvas.getElement("gamepad-l2-lt").color=16777215;
		});
	}
}
