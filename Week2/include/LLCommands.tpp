#include "LLCommands.h"

#include <iostream>
using namespace std;

template <typename Data>
LLCommands<Data>::LLCommands() : head(nullptr) {}

template<typename Data>
LLCommands<Data>::~LLCommands() {
    while (head) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
}

template<typename Data>
void LLCommands<Data>::add_to_front(Data value) {
    Node* new_node = new Node(value);
    new_node->next = head;  // poveži novi čvor sa trenutnim head-om
    head = new_node;        // novi čvor postaje novi head
}

template<typename Data>
void LLCommands<Data>::print() const {
    Node* current = head;
    while (current) {
        std::cout << current->data << " -> ";
        current = current->next;
    }
    std::cout << "NULL\n";
}

