#include "DestructorEx.h"

template <typename T>
Student<T>::Student(const std::string& name, T gpa) {
    this->name = name;
    this->gpa = new T(gpa);
}

template <typename T>
Student<T>::~Student() {
    delete gpa;
    std::cout << "Destructor: " << name << " destroyed\n";
}

template <typename T>
void Student<T>::print() const {
    std::cout << "Name: " << name << ", GPA: " << *gpa << std::endl;
}