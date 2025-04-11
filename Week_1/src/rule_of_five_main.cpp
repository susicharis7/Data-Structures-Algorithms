#include "../include/RuleOfFive.h"
#include <iostream>
using namespace std;

int main() {

  // // Destructor (Example) (RuleOfFive.h)
  // Student<double> s1("Haris",9.5);
  // s1.print();
  //
  // Student<int>* s2 = new Student<int>("Sumea",9);
  // s2->print();
  // delete s2;
  //
  //
  // // Copy Constructor
  // cout << "\nTesting Copy Constructor\n";
  // Student<double> s1copy = s1;
  // s1copy.print();
  //
  // // Copy Assignment Operator
  // cout << "\nTesting Copy Assignment\n";
  // Student<double> cao1("Semha",8.5); // this
  // cao1.print();
  //
  // Student<double> cao2("Harke",10); // other
  // cao1 = cao2; // cao1 is becoming cao2
  // cao1.print();
  //
  // Student<double> cao3("Majser",6);
  // cao3.print();
  // cao3 = cao2 = cao1;
  // cao3.print();

  // Move Constructor
  cout << "\nTesting Move Constructor\n";
  Student<double> mc1("Tarik",9.5);
  Student<double> mc2 = move(mc1);
  mc2.print();


  return 0;
};


