#pragma once
class Ball
{
public:
	char type[25];
	char brand[25];
	int size;
	int ballPsi;

	Ball(char aType[25], char aBrand[25], int aSize);
	void throwBall(int distanceInMeters);
	void kickBall(int distanceInMeters);
	void inflateBall(int psi);
};

