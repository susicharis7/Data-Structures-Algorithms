#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <string>

template <typename T>
class Student {
private:
  std::string name;
  T* gpa;

public:
  Student(const std::string& name, T gpa);
  // 1~Destructor
  ~Student();
  // 2~Copy Constructor
  Student(const Student& other);
  // 3~Copy Assignment Operator
  Student& operator=(const Student& other);
  // 4~Move Constructor
  Student(Student&& other) noexcept;
  // 5~Move Assignment Operator
  Student& operator=(Student&& other) noexcept;

  void print() const;
};

#include "RuleOfFive.tpp"

#endif
