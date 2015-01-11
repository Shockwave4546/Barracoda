#pragma systemFile

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
