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
    
    static int numberEvents;
    
public:
    char* nameEvent;
    string date;
    int time;
    bool hasLocation;
    bool hasRoom;
}
