#include "Ball.h"
#include <iostream>
#include <string.h>

Ball::Ball(char aType[25], char aBrand[25], int aSize) {
	strcpy_s(type, aType);
	strcpy_s(brand, aBrand);
	size = aSize;
	ballPsi = 10;
}

void Ball::throwBall(int distanceInMeters) {
	printf("you dropped the ball %d meters away\n", distanceInMeters);
	ballPsi--;
	printf("current ball air pressure is %d psi\n", ballPsi);
}

void Ball::kickBall(int distanceInMeters) {
	printf("you kicked the ball %d meters away\n", distanceInMeters);
	ballPsi--;
	printf("current ball air pressure is %d psi\n", ballPsi);
}

void Ball::inflateBall(int psi) {
	printf("you filled %d psi to the ball\n", psi);
	ballPsi += psi;
	printf("current ball air pressure is %d psi\n", ballPsi);
}

