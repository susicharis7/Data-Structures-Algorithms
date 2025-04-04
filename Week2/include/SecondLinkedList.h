#ifndef SECONDLINKEDLIST_H
#define SECONDLINKEDLIST_H


template <typename Data>
class SecondLinkedList {
    private:
      struct Node {
        Data data;
        Node* next;

        Node(Data data) : data(data), next(nullptr) {};
        };

        Node* head;


    public:
      SecondLinkedList();
      ~SecondLinkedList();

      void add_to_front(Data data);
      void print() const;
};


#include "SecondLinkedList.tpp"
#endif //SECONDLINKEDLIST_H
