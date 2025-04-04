#ifndef SECONDPRACTICETASK_H
#define SECONDPRACTICETASK_H


template <typename Data>
class SecondPracticeTask {
    private:
      struct Node {
          Data data;
          Node* next;

          Node(Data data) : data(data), next(nullptr) {};
      };

      Node* head;

    public:
      SecondPracticeTask();
      ~SecondPracticeTask();
      void add_to_front(Data value);
      void remove_from_front();
      void print() const;

      void add_to_back(Data value);
      void remove_from_back();

      void reverse();

};

void test_list();
void char_list();

#include "SecondPracticeTask.tpp"
#endif //SECONDPRACTICETASK_H
