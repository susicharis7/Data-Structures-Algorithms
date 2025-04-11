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
  Student(const std::string& name, T gpa); // Parametrizovani konstruktor
  ~Student();

  void print() const;
};

#include "DestructorEx.tpp"

#endif
