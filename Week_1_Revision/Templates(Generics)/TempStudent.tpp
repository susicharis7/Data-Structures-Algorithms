#include "TempStudent.h"
#include <iostream>
#include <string>
using namespace std;

template <typename T>
TempStudent<T>::TempStudent(string name, int age, T gpa) : name(name), age(age), gpa(gpa) {}

template <typename T>
void TempStudent<T>::display() const {
  cout << "(template) Name: " << this-> name << endl;
  cout << "(template) Age: " << this-> age << endl;
  cout << "(template) GPA: " << this->gpa << endl;

  }


template <typename T>
void TempStudent<T>::setGPA(T gpa) {
  this->gpa = gpa;
}

template<typename T>
T TempStudent<T>::getGPA() {
  return this->gpa;
}
