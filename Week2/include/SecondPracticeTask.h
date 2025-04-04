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
      void print() const;
};

void test_list();
void char_list();

#include "SecondPracticeTask.tpp"
#endif //SECONDPRACTICETASK_H
