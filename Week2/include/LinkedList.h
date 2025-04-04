//
// Created by Haris on 4. 4. 2025..
//

#ifndef LINKEDLIST_H
#define LINKEDLIST_H


template <typename Data>
class LinkedList {
    private:
      struct Node {
        Data data;
        Node* next;

        Node(Data data) : data(data), next(nullptr) {}

        };

        Node* head;

        public:
          LinkedList();
          ~LinkedList();

          void add_to_front(Data value);
          void print() const;
};


#include "LinkedList.tpp"
#endif //LINKEDLIST_H
