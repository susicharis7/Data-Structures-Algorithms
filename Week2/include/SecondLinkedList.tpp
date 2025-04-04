#include "SecondLinkedList.h"
#include <iostream>
using namespace std;

template <typename Data>
SecondLinkedList<Data>::SecondLinkedList() : head(nullptr) {};

template <typename Data>
SecondLinkedList<Data>::~SecondLinkedList() {
      while(head) {
        Node* temp = head;
        head = head->next;
        delete temp;
        };
};

template <typename Data>
void SecondLinkedList<Data>::add_to_front(Data data) {
      Node* new_node = new Node(data);
      new_node->next = head;
      head = new_node;
  };

template <typename Data>
void SecondLinkedList<Data>::print() const {
  Node* current = head;
  while(current) {
     cout << current->data << " -> ";
     current = current->next;
  };

  cout << "NULL" << endl;

};