//
// Created by Haris on 23. 3. 2025..
//

#ifndef SECSTUDENT_H
#define SECSTUDENT_H
#include <iostream>
using namespace std;


class SecStudent {
public:
  string name;
  int age;
  double* gpa;

  SecStudent(string name, int age, double gpa);
  ~SecStudent();

  // Move Constructor
  SecStudent(SecStudent&& other) noexcept;

  // Move Assignment Operator
  SecStudent& SecStudent::operator=(SecStudent&& other) noexcept;


  void display() const;
};



#endif //SECSTUDENT_H
