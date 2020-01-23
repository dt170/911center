#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include"Person.h"


class Employee : public Person{
public:
	Employee(string name, string lastname, string gender, string address, string city, int phone);
	virtual ~Employee();
	void setAddress(string temp);
	void setCity(string temp);
	void setPhone(int temp);

	string getAddress()const;
	string getCity()const;
protected:
	string address, city, job;
	int phone;


};

#endif // !EMPLOYEE_H