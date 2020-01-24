#include "pch.h"
#include "Client.h"

Client::Client(CString name, CString lastname, CString gender, CString address, CString city, int phone, CString report):Employee(name,lastname,gender,address,city,phone)
{

}



Client::~Client()
{
}

void Client::setReport(CString temp)
{
	this->report = temp;
}

CString Client::getReport() const
{
	return report;
}
