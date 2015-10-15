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
void stopall()
{
	motor[frontLeft] = 0;
	motor[frontRight] = 0;
}

void sissorliftUpAuton()
{
	motor[sissorliftRight] = 100;
	motor[sissorliftLeft] = 100;
	nMotorEncoder[sissorliftLeft]= 1260;//?
	nMotorEncoder[sissorliftRight]= 1260;//?
}

void sissorliftDownAuton()
{
	motor[sissorliftRight] = -100;
	motor[sissorliftLeft] = -100;
	nMotorEncoder[sissorliftLeft]= 0;//?
	nMotorEncoder[sissorliftRight]= 0;//?
}

void sissorliftDown()
{
	motor[sissorliftRight] = -100;
	motor[sissorliftLeft] = -100;
}

void sissorliftUp()
{
	motor[sissorliftRight] = 100;
	motor[sissorliftLeft] = 100;
}
