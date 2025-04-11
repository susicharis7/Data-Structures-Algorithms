#include "../include/RuleOfFive.h"
#include <iostream>
using namespace std;

int main() {

  // Destructor (Example) (RuleOfFive.h)
  Student<double> s1("Haris",9.5);
  s1.print();

  Student<int>* s2 = new Student<int>("Sumea",9);
  s2->print();
  delete s2;


  // Copy Constructor
  cout << "\nTesting Copy Constructor\n";
  Student<double> s1copy = s1;
  s1copy.print();

  return 0;
};


