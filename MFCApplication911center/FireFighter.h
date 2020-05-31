#ifndef FIRE_FIGHTER_H
#define FIRE_FIGHTER_H
#include "Employee.h"

class FireFighter:public Employee{
public:
	FireFighter(CString name, CString lastname, CString gender, CString address, CString city,int phone,int kind);
	CString handleEvent()
	{
		CString temp;
		temp = L"FireFighter Answered the call !";
		return (temp);
	}
};

#endif // !FIRE_FIGHTER_H