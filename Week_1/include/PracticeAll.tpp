#include "PracticeAll.h"
#include <iostream>
using namespace std;

template <typename T>
StudentPractice<T>::StudentPractice(string name, T gpa) {
    this->name = name;
    this->gpa = new T(gpa);
};

template <typename T>
StudentPractice<T>::~StudentPractice() {
    delete gpa;
    cout << "Destructor Instantiated: " << name << endl;
};

template <typename T>
StudentPractice<T>::StudentPractice(const StudentPractice& other) {
    this->name = other.name;
    this->gpa = new T(*other.gpa);
    cout << "Copy Constructor Instantiated: " << name << endl;
};

template <typename T>
void StudentPractice<T>::print() const {
    std::cout << "Name: " << name << ", GPA: " << *gpa << std::endl;
};