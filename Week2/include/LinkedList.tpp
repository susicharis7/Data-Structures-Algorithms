#include "LinkedList.h"
#include <iostream>
using namespace std;

template <typename Data>
LinkedList<Data>::LinkedList() : head(nullptr) {};

template <typename Data>
LinkedList<Data>::~LinkedList() {
    while(head) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
};


template <typename Data>
void LinkedList<Data>::add_to_front(Data value) {
       Node* new_node = new Node(value);
       new_node->next = head;
       head = new_node;
};

template <typename Data>
void LinkedList<Data>::print() const {
      Node* current = head;
      while (current) {
           cout << current->data << " -> ";
           current = current-> next;
        }

    cout << "NULL" << endl;
  };

