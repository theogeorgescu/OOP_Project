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
    static int availableLocations;
    
private:
    char* nameLocation;
    int maximumCapacity;
    int numberRows;
    string zones;
    int numberSeatsPerRow;
    bool hasLocationRoom;
    
public:
    Location()
    :nameLocation(nullptr), maximumCapacity(0), numberRows(0), zones(""), numberSeatsPerRow(0), hasLocationRoom(false) {
        
        this->nameLocation = new char[strlen("Nowhere") + 1];
        strcpy(this->nameLocation, "Nowhere");
        
        availableLocations++;
        
    }
    
    Location(char* nameLocation, int maximumNCapacity, int numberRows, string zones, int numberSeatsPerRow, bool hasLocationRoom){
        
        this->nameLocation = new char[strlen(nameLocation) + 1];
        strcpy(this->nameLocation, nameLocation);
        
        this->maximumCapacity = maximumCapacity;
        this->numberRows = numberRows;
        this->zones = zones;
        this->numberSeatsPerRow = numberSeatsPerRow;
        
        availableLocations++;
        
    }
    
    Location(const Location& l) {
        this->nameLocation = new char[strlen(l.nameLocation) + 1];
        strcpy(this->nameLocation, l.nameLocation);
        
        this->maximumCapacity = l.maximumCapacity;
        this->numberRows = l.numberRows;
        this->zones = l.zones;
        this->numberSeatsPerRow = l.numberSeatsPerRow;
        this->hasLocationRoom= l.hasLocationRoom;
        
        availableLocations++;
    }
    
    ~Location() {
        if(this->nameLocation != nullptr)
            delete[] this->nameLocation;
        
        availableLocations--;
    }
    
    Location& operator = (const Location& l) {
        if(this != &l) {
            if(this->nameLocation != nullptr)
                delete[] this->nameLocation;
            
            this->nameLocation = new char[strlen(l.nameLocation) + 1];
            strcpy(this->nameLocation, l.nameLocation);
            
            this->maximumCapacity = l.maximumCapacity;
            this->numberRows = l.numberRows;
            this->zones = l.zones;
            this->numberSeatsPerRow = l.numberSeatsPerRow;
            this->hasLocationRoom= l.hasLocationRoom;
        }
        return *this;
    }
    
    Location& operator++() {
        if(this->numberSeatsPerRow <= 200) {
            this->numberSeatsPerRow++;
        }
        return *this;
    }
    
    bool operator==(const Location& l) {
        return this->maximumCapacity == l.maximumCapacity;
    }
    
    bool operator<(const Location& l) {
        return this->maximumCapacity < l.maximumCapacity;
    }
    
    bool operator>(const Location& l) {
        return this->maximumCapacity > l.maximumCapacity;
    }
    
    int Location::availableLocations = 0;
