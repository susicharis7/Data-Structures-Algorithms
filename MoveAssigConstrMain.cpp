#include <iostream>
#include "Week_1_Revision/MoveConstr_Assignment(4_5Rule)/SecStudent.h"
using namespace std;
int main() {
    SecStudent s1("Sumea",20,9.5);
    SecStudent s2 = move(s1);
    s2.display();
}

