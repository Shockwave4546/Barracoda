#pragma systemFile //madde by Will M.

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
void allStop()
{
	motor[frontLeft] = 0;
	motor[frontRight] = 0;
}
/*
void Sensor()
{
		while (SensorValue[light1] <= 40 || SensorValue[light1] >=72)
		{
			sleep(10);
		}
		while (SensorValue[light2] <= 40 || SensorValue[light2] >= 72)
		{
			turnRight();
		}

		if (SensorValue[light2] >= 40 || SensorValue[light2] <= 72)
		{
			allStop();
			servo[backGrab]= 90;
			sleep(10);
			allBackwards();
			sleep(10);
			allStop();
			servo[backGrab]= 0;
		}
}
	*/
