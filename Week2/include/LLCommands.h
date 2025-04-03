
#ifndef LLCOMMANDS_H
#define LLCOMMANDS_H


template <typename Data>
class LLCommands {
    private:
      struct Node {
        Data data;
        Node* next;

        Node(Data data) : data(data), next(nullptr) {}

      };

      Node* head;

    public:
      LLCommands();
      ~LLCommands();

      void add_to_front(Data value);
      void print() const;
};


#include "LLCommands.tpp"



#endif //LLCOMMANDS_H
