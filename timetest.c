#pragma config(Hubs,  S1, HTMotor,  none,     none,     none)
#pragma config(Hubs,  S2, HTMotor,  none,     none,     none)
#pragma config(Hubs,  S3, HTServo,  none,     none,     none)
#pragma config(Sensor, S1,     ,               sensorI2CMuxController)
#pragma config(Sensor, S2,     ,               sensorI2CMuxController)
#pragma config(Sensor, S3,     ,               sensorI2CMuxController)
#pragma config(Motor,  mtr_S1_C1_1,     leftM,         tmotorTetrix, PIDControl, reversed, driveLeft, encoder)
#pragma config(Motor,  mtr_S1_C1_2,     rightM,        tmotorTetrix, PIDControl, driveRight, encoder)
#pragma config(Motor,  mtr_S2_C1_1,     SLiflt,            tmotorTetrix, openLoop) //up and down
#pragma config(Servo,  srvo_S3_C1_1,    SFR,                  tServoStandard)
#pragma config(Servo,  srvo_S3_C1_2,    SFL,                  tServoStandard)
#pragma config(Servo,  srvo_S3_C1_3,    SB,                   tServoStandard)
/*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*/

/////////////////////////////////////////////////////////////////////////////////////////////////////
//
//                           Autonomous Mode Code Template
//
// This file contains a template for simplified creation of an autonomous program for an TETRIX robot
// competition.
//
// You need to customize two functions with code unique to your specific robot.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////

#include "JoystickDriver.c"  //Include file to "handle" the Bluetooth messages.


/////////////////////////////////////////////////////////////////////////////////////////////////////
//
//                                    initializeRobot
//
// Prior to the start of autonomous mode, you may want to perform some initialization on your robot.
// Things that might be performed during initialization include:
//   1. Move motors and servos to a preset position.
//   2. Some sensor types take a short while to reach stable values during which time it is best that
//      robot is not moving. For example, gyro sensor needs a few seconds to obtain the background
//      "bias" value.
//
// In many cases, you may not have to add any code to this function and it will remain "empty".
//
/////////////////////////////////////////////////////////////////////////////////////////////////////

void initializeRobot()
{
  // Place code here to sinitialize servos to starting positions.
  // Sensors are automatically configured and setup by ROBOTC. They may need a brief time to stabilize.

  return;
}


/////////////////////////////////////////////////////////////////////////////////////////////////////
//
//                                         Main Task
//
// The following is the main code for the autonomous robot operation. Customize as appropriate for
// your specific robot.
//
// The types of things you might do during the autonomous phase (for the 2008-9 FTC competition)
// are:
//
//   1. Have the robot follow a line on the game field until it reaches one of the puck storage
//      areas.
//   2. Load pucks into the robot from the storage bin.
//   3. Stop the robot and wait for autonomous phase to end.
//
// This simple template does nothing except play a periodic tone every few seconds.
//
// At the end of the autonomous period, the FMS will autonmatically abort (stop) execution of the program.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////

task main()
{
  initializeRobot();

  waitForStart(); // Wait for the beginning of autonomous phase.
	/*setMultipleMotors(64, leftM , rightM);//start
	wait(); //drive time
	stopAllMotors();
	setMotor(rightM, - ); //trun rate. truing to parking spacew
  wait();//trun time
	stopAllMotors();
  setMultipleMotors(64, leftM , rightM);//drive to parking space
	wait();//drive time
	stopAllMotors();
  setMotor(leftM,-); //truing @ parking space
	wait();//trun time
	stopAllMotors();
  setMultipleMotors(64, leftM, rightM);//driving to other teams rolling goals
	wait();//drive time
	stopAllMotors();
  setMotor(rightM , 5);//speed of trun
	wait(5);//trun time for messing up other
	setMotor(leftM, 5)
	setMultipleMotors(-64,leftm,rightM);//head back to parking space
	*/






  while (true)
  {
  	wait(100);
  }
}
