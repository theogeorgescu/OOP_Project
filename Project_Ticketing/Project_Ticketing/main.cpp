#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<fstream>
#include<string>
#include <vector>
#include <list>
#include <stack>
#include <deque>
#include <queue>
#include <map>

using namespace std;

class Location {
    
private:
    string nameLocation;
    int maximumCapacity;
    int numberRows;
    char zones;
    int numberSeatsPerRow;
    string nameRoom;
    
public:
    Location()
    :nameLocation(""), maximumCapacity(<#int#>)(0), numberRows(0), zones(''), numberSeatsPerRow(0), nameRoom("") { }
    
    Location(string nameLocation
             int maximumNCapacity, int numberRows, char zones,
             int numberSeatsPerRow, string nameRoom) {
        this->nameLocation = nameLocation;
        this->maximumCapacity = maximumCapacity;
        this->numberRows = numberRows;
        this->zones = zones;
        this->numberSeatsPerRow = numberSeatsPerRow;
        this->nameRoom = nameRoom;
    }
    
    Location& operator = (const Location& l) {
        if(this != &l) {
            this->nameLocation = l.Location;
            this->maximumCapacity = l.maximumCapacity;
            this->numberRows = l.numberRows;
            this->zones = l.zones;
            this->numberSeatsPerRow = l.numberSeatsPerRow;
            this->nameRoom = l.nameRoom;
        }
}

class Event {
    string date;
    int time;
    string name;
}
