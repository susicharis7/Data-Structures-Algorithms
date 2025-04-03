#include <iostream>
#include "../include/LLCommands.h"
using namespace std;

int main() {
    LLCommands<int> list;
    list.add_to_front(5);
    list.add_to_front(10);
    list.add_to_front(20);

    list.print();
}