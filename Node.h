#ifndef NODE_H
#define NODE_H

#include <iostream>
using namespace std;

class Node {
private:
    string studentName;
    string startStation;
    string endStation;
    float distance;
    float CO2saved;
    Node* next;

public:
    // Constructor
    Node(string name, string start, string end, float dist, float co2) {
        studentName = name;
        startStation = start;
        endStation = end;
        distance = dist;
        CO2saved = co2;
        next = nullptr;
    }

    // ======= GETTERS =======
    string getStudentName() { return studentName; }
    string getStartStation() { return startStation; }
    string getEndStation() { return endStation; }
    float getDistance() { return distance; }
    float getCO2saved() { return CO2saved; }
    Node* getNext() { return next; }

    // ======= SETTERS =======
    void setNext(Node* ptr) { next = ptr; }
};

#endif
