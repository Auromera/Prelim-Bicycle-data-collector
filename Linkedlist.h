#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <iostream>
#include "Node.h"
using namespace std;

class LinkedList {
private:
    Node* head;

public:
    // Constructor
    LinkedList() {
        head = nullptr;
    }

    // Destructor
    ~LinkedList() {
        Node* curr = head;
        while (curr != nullptr) {
            Node* temp = curr;
            curr = curr->next;
            delete temp;
        }
    }

    // Insert at front
    void insertFront(string name, string start, string end, float dist, float co2) {
        Node* newNode = new Node(name, start, end, dist, co2);
        newNode->next = head;
        head = newNode;
    }

    // Display all trips
    void display() {
        Node* curr = head;
        while (curr != nullptr) {
            cout << curr->studentName << " | "
                 << curr->startStation << " → "
                 << curr->endStation << " | "
                 << curr->distance << " km | "
                 << curr->CO2saved << " kg CO2"
                 << endl;
            curr = curr->next;
        }
    }
};

#endif
