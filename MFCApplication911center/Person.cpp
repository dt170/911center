#include "pch.h"
#include "Person.h"



//c'tor
Person::Person(string name, string lastname, string gender)
{
	setName(name);
	setLastName(lastname);
	setGender(gender);

}
//d'tor
Person::~Person()
{
}

void Person::setName(string str){
	this->name = str;
}

void Person::setLastName(string str){
	this->lastname = str;
}

void Person::setGender(string str){
	this->gender = str;
}

string Person::getLastName() const{
	return lastname;
}

string Person::getGender() const
{
	return gender;
}

string Person::getName() const
{
	return name;
}
