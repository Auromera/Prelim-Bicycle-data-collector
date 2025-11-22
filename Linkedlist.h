#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <iostream>
#include "Node.h"
using namespace std;

class LinkedList {
private:
    Node* head;

public:
    LinkedList() { head = nullptr; }

    ~LinkedList() {
        Node* curr = head;
        while (curr != nullptr) {
            Node* temp = curr;
            curr = curr->getNext();
            delete temp;
        }
    }

    void insertFront(string name, string start, string end, float dist, float co2) {
        Node* newNode = new Node(name, start, end, dist, co2);
        newNode->setNext(head);
        head = newNode;
    }

    void display() {
        Node* curr = head;
        while (curr != nullptr) {
            cout << curr->getStudentName() << " | "
                 << curr->getStartStation() << " → "
                 << curr->getEndStation() << " | "
                 << curr->getDistance() << " km | "
                 << curr->getCO2saved() << " kg CO2"
                 << endl;

            curr = curr->getNext();
        }
    }
};

#endif
