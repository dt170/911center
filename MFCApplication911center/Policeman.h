#ifndef POLICEMAN_H
#define POLICEMAN_H
#include "Employee.h"
class Policeman : public Employee{
public:
	Policeman(string name, string lastname,string gender,string address, string city, int phone, int badegeNum);
	void setBadgeNumber(int temp);
	int getBadgeNumber()const;




private:
	int badgeNumber;


};

#endif //POLICEMAN_H