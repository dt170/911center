#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include"Person.h"


class Employee : public Person{
public:
	Employee(CString name, CString lastname, CString gender, CString address, CString city, int phone);
	virtual ~Employee();
	void setAddress(CString temp);
	void setCity(CString temp);
	void setPhone(int temp);

	CString getAddress()const;
	CString getCity()const;
protected:
	CString address, city, job;
	int phone;


};

#endif // !EMPLOYEE_H