#ifndef EVENT_H
#define EVENT_H
class Event{

public:
	virtual bool openEvent()=0;
	virtual bool CloseEvent() = 0; // print the event that handle 
	virtual void HandleEvent() = 0;

};



#endif // !EVENT_H

