//
// Created by Haris on 23. 3. 2025..
//

#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
using namespace std;


class Student {
public:
    string name;
    int age;
    double* gpa;

    Student(string name, int age, double gpa);
    ~Student();

    // Copy Constructor
    Student(const Student& other);

    // Copy Assignment (Operator)
    Student& operator = (const Student& other);
};



#endif //STUDENT_H
