//
// Created by Haris on 23. 3. 2025..
//

#include "SecStudent.h"

SecStudent::SecStudent(string name,int age,double gpa) : name(name), age(age) {
    this->gpa = new double(gpa);
    cout << "SecStudent created: " << name << endl;
}

SecStudent::~SecStudent() {
    delete gpa;
    cout << "Destructor: " << name << " destroyed\n";
}

// Move Constructor
/*
SecStudent::SecStudent(SecStudent&& other) noexcept : name(move(other.name)), age(other.age), gpa(other.gpa) {
    other.gpa = nullptr;
    cout << "Move Constructor: " << name << " preuzeo resurse\n";
}
*/

// Move Constructor
SecStudent::SecStudent(SecStudent&& other) noexcept {
    this->name = move(other.name);
    this->age = other.age;
    this->gpa = other.gpa;
    other.gpa = nullptr;

    cout << "Move Constructor: " << name << " preuzeo resurse\n";
}

// Move Assignment Operator
SecStudent& SecStudent::operator=(SecStudent&& other) noexcept {
    if (this == &other) return *this;

    delete gpa;

    name = move(other.name);
    age = other.age;
    gpa = other.gpa;
    other.gpa = nullptr;

    cout << "Move assignment: " << name << " move assigned!\n";
    return *this;
}

void SecStudent::display() const{
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "GPA: " << *gpa << endl;
}


