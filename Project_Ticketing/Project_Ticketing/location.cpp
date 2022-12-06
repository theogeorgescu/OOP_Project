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
    string zones;
    int numberSeatsPerRow;
    bool isFree;
    
public:
    static int availableLocations;
    static int minimumCapacity;
    static int nameLocationLenght;
    
    Location()
    :nameLocation(nullptr), maximumCapacity(0), numberRows(0), zones(""), numberSeatsPerRow(0), isFree(false) {
        
        this->nameLocation = new char[strlen("Nowhere") + 1];
        strcpy(this->nameLocation, "Nowhere");
        
        availableLocations++;
        
    }
    
    /*Location(const char* nameLocation, string zones) {
     this->setNameLocation(nameLocation);
     this->setZones(zones);
     }*/
    
    Location(const char* nameLocation, int maximumNCapacity, int numberRows, string zones, int numberSeatsPerRow, bool isFree) {
        
        this->nameLocation = new char[strlen(nameLocation) + 1];
        strcpy(this->nameLocation, nameLocation);
        
        this->maximumCapacity = maximumCapacity;
        this->numberRows = numberRows;
        this->zones = zones;
        this->numberSeatsPerRow = numberSeatsPerRow;
        this->isFree = isFree;
        
        availableLocations++;
        
    }
    
    
    int getNumberRows() {
        return this->numberRows;
    }
    
    string getZones() {
        return this->zones;
    }
    
    int getNumberSeatsPerRow() {
        return this->numberSeatsPerRow;
    }
    
    bool getisFree() {
        return this->isFree;
    }
    
    void setNameLocation(const char* newNameLocation) {
        /* if(newNameLocation == nullptr && strlen(newNameLocation) < Location::nameLocationLenght) {
         throw exception("Location error");
         }
         */
        
        if(this->nameLocation != nullptr)
            delete[] this->nameLocation;
        
        this->nameLocation = new char[strlen(newNameLocation) + 1];
        strcpy_s(this->nameLocation, strlen(newNameLocation) + 1, newNameLocation);
        
    }
    
    void setZones(string zone) {
        if(zones.length() >= 1) {
            this->zones = zone;
        }
        /* else {
         throw exception("Zone error");
         }*/
    }
    
    void setNumberRows(int newNumberRows) {
        /* if (newNumberRows < 0) {
         throw exception("Rows error");
         }*/
        
        this->numberRows = newNumberRows;
        
        if (this->numberRows == 0) {
            this->isFree = false;
        }
        else {
            this->isFree = true;
        }
    }
    
    void setNumberSeatsPerRow(int newNumberSeatsPerRow) {
        /*if (NumberSeatsPerRow < 0) {
         throw exception("Seats error");
         }*/
        
        this->numberSeatsPerRow = newNumberSeatsPerRow;
        
        if (this->numberRows == 0) {
            this->isFree = false;
        }
        else {
            this->isFree = true;
        }
    }
    
    Location(const Location& l) {
        this->nameLocation = new char[strlen(l.nameLocation) + 1];
        strcpy(this->nameLocation, l.nameLocation);
        
        this->maximumCapacity = l.maximumCapacity;
        this->numberRows = l.numberRows;
        this->zones = l.zones;
        this->numberSeatsPerRow = l.numberSeatsPerRow;
        this->isFree = l.isFree;
        
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
            this->isFree= l.isFree;
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
    
    friend ostream& operator<<(ostream& out, const Location& l);
    friend istream& operator>>(istream& in, Location& l);
};


