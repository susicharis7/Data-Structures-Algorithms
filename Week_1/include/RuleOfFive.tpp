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

// 3~copy assignment operator
template <typename T>
Student<T>& Student<T>::operator=(const Student& other) {
    if (this == &other) return *this; // self-assignment check

    delete gpa;
    name = other.name;
    gpa = new T(*other.gpa);

    cout << "Copy Assignment instantiated: " << name << endl;
    return *this; // we give back reference to current object
};

// 4~move constructor
template <typename T>
Student<T>::Student(Student<T>&& other) noexcept {
    name = move(other.name);
    gpa = other.gpa;

    other.gpa = nullptr;
    cout << "Move Constructor: " << name << " moved\n";
};

// 5~move assignment
template <typename T>
Student<T>& Student<T>::operator=(Student<T>&& other) noexcept {
    if (this == &other) return *this;

    delete gpa;
    name = move(other.name);
    gpa = other.gpa;

    other.gpa = nullptr;

    std::cout << "Move Assignment: " << name << " move assigned\n";

    return *this;
};



template <typename T>
void Student<T>::print() const {
    std::cout << "Name: " << name << ", GPA: " << *gpa << std::endl;
}