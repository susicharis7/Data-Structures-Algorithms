#ifndef OPERATOROVERLOADING_H
#define OPERATOROVERLOADING_H

#include <iostream>
#include <string>

template <typename T>
class StudentOverload {
private:
  std::string name;
  T gpa;

public:
  StudentOverload(const std::string& name, T gpa);

  // Operator +
  StudentOverload operator+(const StudentOverload& other) const;

  // Operator ==
  bool operator==(const StudentOverload& other) const;

  void print() const;
};

#include "OperatorOverloading.tpp"

#endif
