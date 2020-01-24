#ifndef CLIENT_H
#define CLIENT_H
#include "Employee.h"




class Client :public Employee{
public:
	Client(CString name, CString lastname, CString gender, CString address, CString city, int phone, CString report);
	virtual ~Client();
	void setReport(CString temp);
	CString getReport()const;

private:
	CString report;
};
#endif // !CLIENT_H
