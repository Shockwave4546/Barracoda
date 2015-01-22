#pragma config(Hubs,  S1, HTServo,  HTMotor,  HTMotor,  none)
#pragma config(Sensor, S1,     ,               sensorI2CMuxController)
#pragma config(Sensor, S2,     light1,         sensorLightActive)
#pragma config(Sensor, S3,     light2,         sensorLightActive)
#pragma config(Sensor, S4,     inferred,       sensorNone)
#pragma config(Motor,  mtr_S1_C2_1,     sissorliftRight, tmotorTetrix, openLoop, reversed)
#pragma config(Motor,  mtr_S1_C2_2,     sissorliftLeft, tmotorTetrix, openLoop)
#pragma config(Motor,  mtr_S1_C3_1,     frontLeft,     tmotorTetrix, openLoop)
#pragma config(Motor,  mtr_S1_C3_2,     frontRight,    tmotorTetrix, openLoop, reversed)
#pragma config(Servo,  srvo_S1_C1_1,    frontGate,            tServoStandard)
#pragma config(Servo,  srvo_S1_C1_2,    backGrab,             tServoStandard)
#pragma config(Servo,  srvo_S1_C1_3,    dump,                 tServoStandard)
#pragma config(Servo,  srvo_S1_C1_4,    servo4,               tServoNone)
#pragma config(Servo,  srvo_S1_C1_5,    servo5,               tServoNone)
#pragma config(Servo,  srvo_S1_C1_6,    servo6,               tServoNone)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

#include "JoystickDriver.c"  //Include file to "manhandle" the Bluetooth messages.
#include "mainControls.c"    //Forward, Back, etc made by Will M.

void initializeRobot()
{
  servo[frontGate] = 155;
  servo[backGrab] = 35;
  return;
}

int posThreshold = 10;
int negThreshold = -10;



/////////////////////////////////////////////////////////////////////////////////////////////////////
//
//                                         Main Task
//
// The following is the main code for the tele-op robot operation. Customize as appropriate for
// your specific robot.
//
// Game controller / joystick information is sent periodically (about every 50 milliseconds) from
// the FMS (Field Management System) to the robot. Most tele-op programs will follow the following
// logic:
//   1. Loop forever repeating the following actions:
//   2. Get the latest game controller / joystick settings that have been received from the PC.
//   3. Perform appropriate actions based on the joystick + buttons settings. This is usually a
//      simple action:
//      *  Joystick values are usually directly translated into power levels for a motor or
//         position of a servo.
//      *  Buttons are usually used to start/stop a motor or cause a servo to move to a specific
//         position.
//   4. Repeat the loop.
//
// Your program needs to continuously loop because you need to continuously respond to changes in
// the game controller settings.
//
// At the end of the tele-op period, the FMS will autonmatically abort (stop) execution of the program.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////

task main()
{
  initializeRobot();
  //waitForStart();   // wait for start of tele-op phase

  while(true)
  {
  	getJoystickSettings(joystick);

		if (joystick.joy1_TopHat == 0)
		{
			allForward();
		}
		else if (joystick.joy1_TopHat == 2)
		{
			turnRight();
		}
		else if (joystick.joy1_TopHat == 4)
		{
			allBackwards();
		}
		else if (joystick.joy1_TopHat == 6)
		{
			turnLeft();
		}
		/*else if (abs(joystick.joy1_y1) > posThreshold)
	  {
	    motor[frontLeft] = joystick.joy1_y1;
	  }
	  else if (abs(joystick.joy1_y1) < negThreshold)
	  {
	    motor[frontLeft] = joystick.joy1_y1;
	  }
	  else if (abs(joystick.joy1_y2) > posThreshold)
	  {
	  	motor[frontRight] = joystick.joy1_y2;
	  }
	  else if (abs(joystick.joy1_y2) < negThreshold)
	  {
	  	motor[frontRight] = joystick.joy1_y2;
	  }*/
	  else
	  {
	  	motor[frontLeft] = joystick.joy1_y1;
	  	motor[frontRight] = joystick.joy1_y2;
	  	motor[sissorliftLeft] = joystick.joy2_
	  }
	  if (joy1Btn(8) == 1)
	  {
	  	servo[frontGate] = 170;
	  	sleep(300);
	  	servo[frontGate] = 0;
	  }

	  if (joy1Btn(6) == 1)
	  {
	  	if (servo[frontGate] == 155)
	  	{
	  		servo[frontGate] = 0;
	  	}
	  	else
	  	{
	  		servo[frontGate] = 155;
	  	}
		}

		if (joy1Btn(5) == 1)
		{
			servo[backGrab] = 35;
		}

		if (joy1Btn(7) == 1)
		{
			servo[backGrab] = 255;
		}

  }
}
