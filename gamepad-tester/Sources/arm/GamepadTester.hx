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
			//trace(gamepad.buttonsFrame[0]);
			if (gamepadnotcalibrated && (gamepad.leftStick.x!=0 && gamepad.leftStick.y!=0 && gamepad.rightStick.x!=0 && gamepad.rightStick.y!=0)) {
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

			if (gamepad.down(Gamepad.keyCode(0))>0.0) canvas.getElement("gamepad-a").color=-1;
			if (gamepad.released(Gamepad.keyCode(0))==true) canvas.getElement("gamepad-a").color=16777215;
			
			if (gamepad.down(Gamepad.keyCode(1))>0.0) canvas.getElement("gamepad-b").color=-1;
			if (gamepad.released(Gamepad.keyCode(1))==true) canvas.getElement("gamepad-b").color=16777215;
			
			if (gamepad.down(Gamepad.keyCode(2))>0.0) canvas.getElement("gamepad-x").color=-1;
			if (gamepad.released(Gamepad.keyCode(2))==true) canvas.getElement("gamepad-x").color=16777215;
			
			if (gamepad.down(Gamepad.keyCode(3))>0.0) canvas.getElement("gamepad-y").color=-1;
			if (gamepad.released(Gamepad.keyCode(3))==true) canvas.getElement("gamepad-y").color=16777215;

			if (gamepad.down(Gamepad.keyCode(12))>0.0) canvas.getElement("gamepad-up").color=-1;
			if (gamepad.released(Gamepad.keyCode(12))==true) canvas.getElement("gamepad-up").color=16777215;
			
			if (gamepad.down(Gamepad.keyCode(13))>0.0) canvas.getElement("gamepad-down").color=-1;
			if (gamepad.released(Gamepad.keyCode(13))==true) canvas.getElement("gamepad-down").color=16777215;
			
			if (gamepad.down(Gamepad.keyCode(14))>0.0) canvas.getElement("gamepad-left").color=-1;
			if (gamepad.released(Gamepad.keyCode(14))==true) canvas.getElement("gamepad-left").color=16777215;
			
			if (gamepad.down(Gamepad.keyCode(15))>0.0) canvas.getElement("gamepad-right").color=-1;
			if (gamepad.released(Gamepad.keyCode(15))==true) canvas.getElement("gamepad-right").color=16777215;
			
			if (gamepad.down(Gamepad.keyCode(8))>0.0) canvas.getElement("gamepad-share").color=-1;
			if (gamepad.released(Gamepad.keyCode(8))==true) canvas.getElement("gamepad-share").color=16777215;
			
			if (gamepad.down(Gamepad.keyCode(9))>0.0) canvas.getElement("gamepad-option").color=-1;
			if (gamepad.released(Gamepad.keyCode(9))==true) canvas.getElement("gamepad-option").color=16777215;

			if (gamepad.down(Gamepad.keyCode(11))>0.0) canvas.getElement("gamepad-r3").color=-1;
			if (gamepad.released(Gamepad.keyCode(11))==true) canvas.getElement("gamepad-r3").color=16777215;
									
			if (gamepad.down(Gamepad.keyCode(10))>0.0) canvas.getElement("gamepad-l3").color=-1;
			if (gamepad.released(Gamepad.keyCode(10))==true) canvas.getElement("gamepad-l3").color=16777215;
			
			if (gamepad.down(Gamepad.keyCode(5))>0.0) canvas.getElement("gamepad-r1-rb").color=-1;
			if (gamepad.released(Gamepad.keyCode(5))==true) canvas.getElement("gamepad-r1-rb").color=16777215;
						
			if (gamepad.down(Gamepad.keyCode(7))>0.0) canvas.getElement("gamepad-r2-rt").color=-1;
			if (gamepad.released(Gamepad.keyCode(7))==true) canvas.getElement("gamepad-r2-rt").color=16777215;
						
			if (gamepad.down(Gamepad.keyCode(4))>0.0) canvas.getElement("gamepad-l1-lb").color=-1;
			if (gamepad.released(Gamepad.keyCode(4))==true) canvas.getElement("gamepad-l1-lb").color=16777215;
						
			if (gamepad.down(Gamepad.keyCode(6))>0.0) canvas.getElement("gamepad-l2-lt").color=-1;
			if (gamepad.released(Gamepad.keyCode(6))==true) canvas.getElement("gamepad-l2-lt").color=16777215;

			if (gamepad.released(Gamepad.keyCode(0))) trace("button 0");
			if (gamepad.released(Gamepad.keyCode(1))) trace("button 1");
			if (gamepad.released(Gamepad.keyCode(2))) trace("button 2");
			if (gamepad.released(Gamepad.keyCode(3))) trace("button 3");
			if (gamepad.released(Gamepad.keyCode(4))) trace("button 4");
			if (gamepad.released(Gamepad.keyCode(5))) trace("button 5");
			if (gamepad.released(Gamepad.keyCode(6))) trace("button 6");
			if (gamepad.released(Gamepad.keyCode(7))) trace("button 7");
			if (gamepad.released(Gamepad.keyCode(8))) trace("button 8");
			if (gamepad.released(Gamepad.keyCode(9))) trace("button 9");
			if (gamepad.released(Gamepad.keyCode(10))) trace("button 10");
			if (gamepad.released(Gamepad.keyCode(11))) trace("button 11");
			if (gamepad.released(Gamepad.keyCode(12))) trace("button 12");
			if (gamepad.released(Gamepad.keyCode(13))) trace("button 13");
			if (gamepad.released(Gamepad.keyCode(14))) trace("button 14");
			if (gamepad.released(Gamepad.keyCode(15))) trace("button 15");
			if (gamepad.released(Gamepad.keyCode(16))) trace("button 16");
			if (gamepad.released(Gamepad.keyCode(17))) trace("button 17");

		});
	}
}