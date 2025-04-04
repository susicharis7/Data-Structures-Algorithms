#include <iostream>
#include "../include/LLCommands.h"
#include "../include/LinkedList.h"
#include "../include/SecondLinkedList.h"
#include "../include/PracticeTask.h"
#include "../include/SecondPracticeTask.h"
using namespace std;

int main() {
  // LLCommands
    LLCommands<int> list;
    list.add_to_front(5);
    list.add_to_front(10);
    list.add_to_front(20);

    list.print();


    // LinkedList

    LinkedList<int> secondList;
    secondList.add_to_front(10);
    secondList.add_to_front(20);
    secondList.add_to_front(30);
    secondList.print();

    //SecondLinkedList
    SecondLinkedList<int> thirdList;
    thirdList.add_to_front(1);
    thirdList.add_to_front(2);
    thirdList.add_to_front(3);
    thirdList.print();

    // PracticeTask
    PracticeTask<int> practiceList;
    practiceList.add_to_front(100);
    practiceList.add_to_front(200);
    practiceList.add_to_front(300);
    practiceList.print();

    // SecondPracticeTask
    test_list();
    char_list();


}