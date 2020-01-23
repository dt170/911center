#include "pch.h"
#include "Policeman.h"

Policeman::Policeman(string name, string lastname, string gender, string address, string city, int phone, int badegeNum):Employee(name,lastname,gender,address,city,phone){

	


}

void Policeman::setBadgeNumber(int temp)
{
	this->badgeNumber = temp;
}

int Policeman::getBadgeNumber() const
{
	return badgeNumber;
}
