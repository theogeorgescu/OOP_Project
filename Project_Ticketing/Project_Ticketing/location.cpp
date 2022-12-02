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
#include "location.hpp"

using namespace std;

class Location {
    
private:
    char* nameLocation;
    int maximumCapacity;
    int numberRows;
    char zones;
    int numberSeatsPerRow;
    bool hasLocationRoom;
    
public:
    Location()
    :nameLocation(nullptr), maximumCapacity(0), numberRows(0), zones(''), numberSeatsPerRow(0), hasLocationRoom(false) {
        
        this->nameLocation = new char[strlen("Nowhere") + 1];
        strcpy(this->nameLocation, "Nowhere");
        
    }
    
    Location(string nameLocation
             int maximumNCapacity, int numberRows, char zones,
             int numberSeatsPerRow, hasLocationRoom) {
        
        this->nameLocation = new char[strlen(nameLocation) + 1];
        strcpy(this->nameLocation, nameLocation);
        
        this->nameLocation = nameLocation;
        this->maximumCapacity = maximumCapacity;
        this->numberRows = numberRows;
        this->zones = zones;
        this->numberSeatsPerRow = numberSeatsPerRow;
        
    }
    
    Location(const Location& l) {
            this->nameLocation = l.Location;
            this->maximumCapacity = l.maximumCapacity;
            this->numberRows = l.numberRows;
            this->zones = l.zones;
            this->numberSeatsPerRow = l.numberSeatsPerRow;
            this->hasLocationRoom= l.hasLocationRoom;
    }
    
    ~Location() {
        if(this->nameLocation != nullptr)
            delete[] this->nameLocation;
    }
    
    Location& operator = (const Location& l) {
        if(this != &l) {
        }
        return *this;
    }
