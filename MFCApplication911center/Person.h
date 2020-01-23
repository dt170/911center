#ifndef PERSON_H
#define PERSON_H
#include <string>

using namespace std;

class Person{

public: 
	Person(string name ,string lastname,string gender);
	virtual ~Person();
	void setName(string str);
	void setLastName(string str);
	void setGender(string str);

	 string getLastName()const;
	 string getGender()const;
	 string getName()const;

protected:
	string name, lastname;
	string gender;
};
#endif // !PERSON_H

