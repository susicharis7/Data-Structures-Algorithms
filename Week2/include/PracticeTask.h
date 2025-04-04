#ifndef PRACTICETASK_H
#define PRACTICETASK_H


template <typename Data>
class PracticeTask {
    private:
      struct Node {
            Data data;
            Node* next;

            Node(Data data) : data(data), next(nullptr) {};
            // pravi novi Node, ubacuje mu value, i odmah next postavlja na nullptr jer nismo jos nista uradili sa njim
        };

        Node* head;

   public:
     PracticeTask();
     ~PracticeTask();

     void add_to_front(Data value);
     void print() const;
};


#include "PracticeTask.tpp"
#endif //PRACTICETASK_H
