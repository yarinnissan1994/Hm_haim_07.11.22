#include "Car.h"
#include <iostream>
#include <string.h>

Car::Car(char aModel[50], char aColor[25], unsigned int aCarNum, int aPeopleCapacity) {
	strcpy_s(model, aModel);
	strcpy_s(color, aColor);
	carNum = aCarNum;
	peopleCapacity = aPeopleCapacity;
	KM = 0;
	rides = 0;
}

void Car::addRide(unsigned int tripKM) {
	KM += tripKM;
	rides++;
}

void Car::carStatus() {
	printf("Model: %s\nColor: %s\nCar Number: %d\nKM: %dkm\nRides: %d\nAverage KM per ride:%dkm\n\n", model, color, carNum, KM, rides, (KM / rides));
}