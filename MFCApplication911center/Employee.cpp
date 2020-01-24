#include "pch.h"
#include "Employee.h"


//c'tor
Employee::Employee(CString name, CString lastname, CString gender, CString address, CString city, int phone):Person(name,lastname,gender){

	
	setAddress(address);
	setCity(city);
	setPhone(phone);

}

Employee::~Employee()
{
}

void Employee::setAddress(CString temp){
	this->address = temp;
}

void Employee::setCity(CString temp){
	this->city = temp;
}


void Employee::setPhone(int temp){
	this->phone = temp;
}

CString Employee::getAddress() const{
	return address;
}

CString Employee::getCity() const{
	return city;
}
