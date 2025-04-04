#include "SecondPracticeTask.h"
#include <iostream>
using namespace std;


template <typename Data>
SecondPracticeTask<Data>::SecondPracticeTask() : head(nullptr) {};

template <typename Data>
SecondPracticeTask<Data>::~SecondPracticeTask() {
    while(head) {
        Node* temp = head;
        head = head->next;
        delete temp;

      cout << "Deleting node with value: " << temp->data << endl;
    };


};

// add to front
template <typename Data>
void SecondPracticeTask<Data>::add_to_front(Data value) {
  Node* new_node = new Node(value);
  new_node->next = head;
  head = new_node;
};

// remove from front
template <typename Data>
void SecondPracticeTask<Data>::remove_from_front() {
  if (!head) return;

  Node* temp = head;
  head = head->next;
  delete temp;

};

// add to back
template <typename Data>
void SecondPracticeTask<Data>::add_to_back(Data value) {
  Node* new_node = new Node(value);

  if (!head) {
    new_node = head;
    return;
  }

  Node* current = head;
  while (current->next) {
    current = current->next;
  };

  current->next = new_node;
};

// remove from back
void SecondPracticeTask<Data>::remove_from_back() {
  Node* current = head;
  while (current->next) {
    current = current->next;
  };
  delete current->next;
  current->next = nullptr;
};

// reverse
void SecondPracticeTask<Data>::reverse() {
  Node* prev = nullptr;
  Node* current = head;
  Node* next = nullptr;

  while (current != nullptr) { // A,B,C
     next = current->next;
     current->next = prev;

    prev = current;
    current = next;
  };

  head = prev;
};


void test_list() {
  SecondPracticeTask<string> stringList;
    stringList.add_to_front("Haris");
    stringList.add_to_front("Sumea");
    stringList.add_to_front("Tarik");
    stringList.add_to_front("Becir");

    stringList.print();
};

void char_list() {
  SecondPracticeTask<char> charList;
  charList.add_to_front('A');
  charList.add_to_front('B');
  charList.add_to_front('C');

  charList.remove_from_front();

  charList.add_to_back('C');

  charList.print();
};

template<typename Data>
void SecondPracticeTask<Data>::print() const {
  Node* current = head;
  while(current) {
    cout << current->data << " -> ";
    current = current->next;
  };
  cout << "NULL" << endl;
};