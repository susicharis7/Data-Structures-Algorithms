//
// Created by Haris on 18. 3. 2025..
//

#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int age;
    double gpa;
    int n1, n2;

    Student(string name, int age, double gpa);
    Student(int n1, int n2);

    void prikaziPodatke() const;

    void saberiDvaBroja() const;
};


#endif //STUDENT_H
