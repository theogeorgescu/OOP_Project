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
#include "participant.hpp"

using namespace std;

class Participant {
    
public:
    const int id;
    char* nameParticipant;
    bool hasEvent;
    bool hasLocation;
    bool hasVIP;
}
