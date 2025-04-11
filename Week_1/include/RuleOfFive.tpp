#include "RuleOfFive.h"
#include <iostream>
using namespace std;

// constructor
template <typename T>
Student<T>::Student(const std::string& name, T gpa) {
    this->name = name;
    this->gpa = new T(gpa);
}

// 1~destructor
template <typename T>
Student<T>::~Student() {
    delete gpa;
    std::cout << "Destructor: " << name << " destroyed\n";
}

// 2~copy constructor
template <typename T>
Student<T>::Student(const Student& other) {
    name = other.name;
    gpa = new T(*other.gpa);
    cout << "Copy constructor: " << name << " copied.\n";
};



template <typename T>
void Student<T>::print() const {
    std::cout << "Name: " << name << ", GPA: " << *gpa << std::endl;
}