#include <iostream>
#include "SMS_With_Encapsulation.h"
#include <string>
using namespace std;

Student::Student(string name, int age, double gpa) : name(name), age(age), gpa(gpa) {}

void Student::display() {
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "GPA: " << gpa << endl;
}

void Student::setName(string name) {
    this->name = name;
}
void Student::setAge(int age) {
    this->age = age;
}
void Student::setGPA(double gpa) {
    this->gpa = gpa;
}

string Student::getName() {
    return name;
}
int Student::getAge() {
    return age;
}
double Student::getGPA() {
    return gpa;
}
