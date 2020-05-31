#ifndef POLICEMAN_H
#define POLICEMAN_H
#include "Employee.h"
class Policeman : public Employee{
public:
	Policeman(CString name, CString lastname, CString gender, CString address, CString city, int phone, int kind);
	CString handleEvent()
	{
		CString temp;
		temp = L"Officer Answered the call !";
		return (temp);
	}

};

#endif //POLICEMAN_H