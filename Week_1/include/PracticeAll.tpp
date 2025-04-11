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
StudentPractice<T>& StudentPractice<T>::operator=(const StudentPractice& other) {
    if(this == &other) return *this;

    delete gpa;
    this->name = other.name;
    this->gpa = new T(*other.gpa);

    cout << "Copy Assignment Instantiated: " << name << endl;

    return *this;


};

template <typename T>
StudentPractice<T>::StudentPractice(StudentPractice<T>&& other) noexcept {
    name = move(other.name);
    gpa = other.gpa;

    other.gpa = nullptr;

};

template <typename T>
void StudentPractice<T>::print() const {
    std::cout << "Name: " << name << ", GPA: " << *gpa << std::endl;
};