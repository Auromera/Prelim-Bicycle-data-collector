#ifndef NODE_H
#define NODE_H

#include <iostream>
using namespace std;

class Node {
public:
    string studentName;
    string startStation;
    string endStation;
    float distance;
    float CO2saved;

    Node* next;

    // Constructor
    Node(string name, string start, string end, float dist, float co2) {
        studentName = name;
        startStation = start;
        endStation = end;
        distance = dist;
        CO2saved = co2;
        next = nullptr;
    }
};

#endif
