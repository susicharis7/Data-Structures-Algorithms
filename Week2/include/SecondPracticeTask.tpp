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

template <typename Data>
void SecondPracticeTask<Data>::add_to_front(Data value) {
  Node* new_node = new Node(value);
  new_node->next = head;
  head = new_node;
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