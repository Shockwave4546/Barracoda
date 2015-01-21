#pragma config(Hubs,  S1, HTServo,  HTMotor,  HTMotor,  none)
#pragma config(Sensor, S2,     light1,         sensorLightActive)
#pragma config(Sensor, S3,     light2,         sensorLightActive)
#pragma config(Sensor, S4,     inferred,       sensorNone)
#pragma config(Motor,  mtr_S1_C2_1,     motorD,        tmotorTetrix, openLoop)
#pragma config(Motor,  mtr_S1_C2_2,     motorE,        tmotorTetrix, openLoop)
#pragma config(Motor,  mtr_S1_C3_1,     frontLeft,     tmotorTetrix, openLoop)
#pragma config(Motor,  mtr_S1_C3_2,     frontRight,    tmotorTetrix, openLoop, reversed)
#pragma config(Servo,  srvo_S1_C1_1,    frontGate,            tServoStandard)
#pragma config(Servo,  srvo_S1_C1_2,    backGrab,             tServoStandard)
#pragma config(Servo,  srvo_S1_C1_3,    dump,                 tServoStandard)
#pragma config(Servo,  srvo_S1_C1_4,    servo4,               tServoNone)
#pragma config(Servo,  srvo_S1_C1_5,    servo5,               tServoNone)
#pragma config(Servo,  srvo_S1_C1_6,    servo6,               tServoNone)
task main()
{
  	servo[dump] = 0;
  	servo[dump] = 180;
}
