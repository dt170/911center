#include "pch.h"
#include "Employee.h"


//c'tor
Employee::Employee(string name, string lastname, string gender, string address, string city, int phone, string job):Person(name,lastname,gender){

	
	setAddress(address);
	setCity(city);
	setPhone(phone);
	setJob(job);

}

Employee::~Employee()
{
}

void Employee::setAddress(string temp){
	this->address = temp;
}

void Employee::setCity(string temp){
	this->city = temp;
}

void Employee::setJob(string temp){
	this->job = temp;
}

void Employee::setPhone(int temp){
	this->phone = temp;
}

string Employee::getAddress() const{
	return address;
}

string Employee::getCity() const{
	return city;
}

string Employee::getJob() const{
	return job;
}
