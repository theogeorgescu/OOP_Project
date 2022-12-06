#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <list>
#include <stack>
#include <deque>
#include <queue>
#include <map>
#include "event.hpp"

using namespace std;

class Event {
    
private:
    int eventID;
    char* nameEvent;
    string date;
    int time;
    double price;
    int numberEvents;
    
public:
    Event() :eventID(0), nameEvent(nullptr), date(""), price(0.0), numberEvents(0) {
        this->date = new char[strlen("Nowhere") + 1];
        strcpy(this->date, "Nowhere");
    }
    
    Event(int eventID, const char* nameEvent, double price, string date, int numberEvents) {
            this->eventID = eventID;
        
            if (this->nameEvent != nullptr)
            {
                delete[] this->nameEvent;
            }
        
            this->nameEvent = new char[strlen(nameEvent) + 1];
            strcpy_s(this->nameEvent, strlen(nameEvent) + 1, nameEvent);
        
            this->price = price;

            if (date == 0 || numberEvents == 0) {
                throw exception("Error");
            }


            this->numberEvents = numberEvents;
        }



    void setEventID(int newEventID) {
        this->eventID= newEventID;
        
        void setEventName(const char* newEventName) {
            this->nameEvent = new char[strlen(newEventName) + 1];
            strcpy_s(nameEvent, strlen(newEventName) + 1, newEventName);
        }
};
