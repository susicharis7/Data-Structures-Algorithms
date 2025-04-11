#include "../include/OperatorOverloading.h"
#include <iostream>
using namespace std;

int main() {
    StudentOverload<double> s1("Tarik", 9.5);
    StudentOverload<double> s2("Haris", 8.0);
    StudentOverload<double> s3("Tarik", 9.5);

    cout << "\nTesting + Operator\n";
    StudentOverload<double> s4 = s1 + s2;
    s4.print();
};