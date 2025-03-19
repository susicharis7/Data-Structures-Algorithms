//
// Created by Haris on 18. 3. 2025..
//

#include "Student.h"
#include <iostream>
#include <string>
using namespace std;

Student::Student(string name, int age, double gpa) : name(name), age(age), gpa(gpa) {}
Student::Student(int n1, int n2) : n1(n1), n2(n2) {}

void Student::prikaziPodatke() const {
    cout << "Name: " << this->name << endl;
    cout << "Age: " << this->age << endl;
    cout << "GPA: " << this->gpa << endl;
}

void Student::saberiDvaBroja() const {
    int sabrano = this->n1 + this->n2;
    cout << sabrano << endl;
}