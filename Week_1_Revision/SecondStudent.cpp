//
// Created by Haris on 19. 3. 2025..
//

#include "SecondStudent.h"
#include <iostream>
#include <string>
using namespace std;


SecondStudent::SecondStudent(string name, int age, double gpa) : name(name), age(age), gpa(gpa) {}

void SecondStudent::display() {
    cout << "S.S. Name: " << this->name << endl;
    cout << "S.S. Age: " << this->age << endl;
    cout << "S.S. GPA: " << this-> gpa << endl;
}

void SecondStudent::setName(string name) {
    this->name = name;
}
string SecondStudent::getName() {
    return this-> name;
}

void SecondStudent::setAge(int age) {
    this->age = age;
}
int SecondStudent::getAge() {
    return this->age;
}

void SecondStudent::setGPA(double gpa) {
    this->gpa = gpa;
}
double SecondStudent::getGPA() {
    return this-> gpa;
}
