#include "pch.h"
#include "Policeman.h"

Policeman::Policeman(CString name, CString lastname, CString gender, CString address, CString city, int phone, int badegeNum):Employee(name,lastname,gender,address,city,phone){

	setBadgeNumber(badegeNum);
}

void Policeman::setBadgeNumber(int temp)
{
	this->badgeNumber = temp;
}

int Policeman::getBadgeNumber() const
{
	return badgeNumber;
}
