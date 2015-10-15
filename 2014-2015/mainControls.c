#pragma systemFile

int none = 0;
int topHatUp = 0;
int topHatRight = 2;
int topHatDown = 4;
int topHatLeft = 6;
int posThreshold = 10;
int negThreshold = -10;
int scissorUp = 120;
int scissorDown = -120;
int gateOpen = 0;
int gateClosed = 155;
int grabUp = 35;
int grabDown = 255;
int openDump = 100/* Add Open Dump Value Here */;
int closedDump = 100/* Add Closed Dump Value Here */;
int twoSec = 2000;
int pressed = 1;

void allForward()
{
	motor[frontLeft] = 100;
	motor[frontRight] = 100;
}

void turnRight()
{
	motor[frontLeft] = 100;
	motor[frontRight] = -100;
}

void turnLeft()
{
	motor[frontLeft] = -100;
	motor[frontRight] = 100;
}

void allBackwards()
{
	motor[frontLeft] = -100;
	motor[frontRight] = -100;
}

void scissorLiftUp()
{
  motor[leftScissorLift] = scissorUp;
  motor[rightScissorLift] = scissorUp;
}

void scissorLiftDown()
{
  motor[leftScissorLift] = scissorDown;
  motor[rightScissorLift] = scissorDown;
}
