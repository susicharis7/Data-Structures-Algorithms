#include "TemplateStudent.h"
#include <iostream>
#include <string>
using namespace std;

template <typename T>
TemplateStudent<T>::TemplateStudent(string name, int age, T gpa) : name(name),age(age) {
    this->gpa = new T(gpa);
    cout << "Kreiran TemplateStudent: " << name << endl;
}

template <typename T>
TemplateStudent<T>::~TemplateStudent() {
  delete gpa;
  cout << "Destructor: " << name << " destroyed" << endl;
}

template <typename T>
void TemplateStudent<T>::display() const {
  cout << "Student: " << name << endl;
  cout << "Age: " << age << endl;
  cout << "GPA: " << *gpa << endl;
}