#include <iostream>
using namespace std;

int main() {
  int a = 5;
  int b = 10;
  int* p = &a; // pointer CAN BE REASSIGNED

  cout << "Pointer before: " << *p << endl;
  p = &b;
  cout << "Pointer after: " << *p << endl;

  int &ref = a;
  ref = b; // 'b' to 'a' - but 'ref' still refers to 'a'
  cout << "Reference : " << ref << endl;

};
