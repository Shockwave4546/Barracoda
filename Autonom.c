#pragma config(Hubs,  S1, HTServo,  HTMotor,  HTMotor,  none)
#pragma config(Sensor, S1,     ,               sensorI2CMuxController)
#pragma config(Sensor, S2,     light1,         sensorNone)
#pragma config(Sensor, S3,     light2,         sensorNone)
#pragma config(Motor,  mtr_S1_C2_1,     scissorLiftLeft, tmotorTetrix, openLoop)
#pragma config(Motor,  mtr_S1_C2_2,     scissorLiftRight, tmotorTetrix, openLoop)
#pragma config(Motor,  mtr_S1_C3_1,     frontleft,     tmotorTetrix, openLoop)
#pragma config(Motor,  mtr_S1_C3_2,     frontright,    tmotorTetrix, openLoop, reversed)
#pragma config(Servo,  srvo_S1_C1_1,    frontGate,            tServoStandard)
#pragma config(Servo,  srvo_S1_C1_2,    backGrab,             tServoStandard)
#pragma config(Servo,  srvo_S1_C1_3,    dump,                 tServoStandard)
#pragma config(Servo,  srvo_S1_C1_4,    servo4,               tServoStandard)
#pragma config(Servo,  srvo_S1_C1_5,    servo5,               tServoStandard)
#pragma config(Servo,  srvo_S1_C1_6,    servo6,               tServoStandard)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

#include "JoystickDriver.c"

task main()
{

	waitForStart();

	motor[frontleft] = 100;
	motor[frontright] = 100;
	wait1Msec(2800);
	motor[frontleft] = 0;
	motor[frontright] = 0;
}
