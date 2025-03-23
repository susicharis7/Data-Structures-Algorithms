//
// Created by Haris on 23. 3. 2025..
//

#include "Student.h"

Student::Student(string name, int age, double gpa) : name(name), age(age) {
    this->gpa = new double(gpa);
}

Student::~Student() {
    delete gpa;
    cout << "Destructor: " << name << " destroyed\n";
}

// Copy Constructor
Student::Student(const Student& other) : name(other.name), age(other.age) {
    gpa = new double(*other.gpa);
    cout << "Copy constructor instantiated: " << name << endl;
}


// Copy Assignment
Student& Student::operator=(const Student& other) {
    if (this == &other) {
        return *this; // self assignment check `*this` znaci da ce vratiti istu vrijednost
    }

    delete gpa;

    name = other.name;
    age = other.age;
    gpa = new double(*other.gpa); // deep copy

    return *this;
}