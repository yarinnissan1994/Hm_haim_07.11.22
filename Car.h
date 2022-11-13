#pragma once
class Car
{
public:
	char model[50];
	char color[25];
	unsigned int carNum;
	int peopleCapacity;
	unsigned int KM;
	int rides;

	Car(char aModel[50], char aColor[25], unsigned int aCarNum, int aPeopleCapacity);
	void addRide(unsigned int tripKM);
	void carStatus();
};

