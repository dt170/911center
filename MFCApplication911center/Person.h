#ifndef PERSON_H
#define PERSON_H
#include <string>

using namespace std;

class Person{

public: 
	Person(CString name , CString lastname, CString gender);
	virtual ~Person();
	void setName(CString str);
	void setLastName(CString str);
	void setGender(CString str);

	CString getLastName()const;
	CString getGender()const;
	CString getName()const;
	virtual CString handleEvent();

protected:
	CString name, lastname;
	CString gender;
};
#endif // !PERSON_H

