#include "../include/DestructorEx.h"
#include <iostream>
using namespace std;

int main() {

  // Destructor (Example) (DestructorEx.h)
  Student<double> s1("Haris",9.5);
  s1.print();

  Student<int>* s2 = new Student<int>("Sumea",9);
  s2->print();
  delete s2;

  return 0;
};

