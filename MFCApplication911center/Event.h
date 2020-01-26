#ifndef EVENT_H
#define EVENT_H
class Event{

public:
	virtual bool openEvent()=0;
	virtual bool CloseEvent() = 0; // print the event that handle 
	virtual void HandleEvent(CString event) = 0;
	virtual bool emergencyUnits() = 0;
};

#endif // !EVENT_H