//
// Created by Haris on 10. 3. 2025..
//

#ifndef STUDENTGENERICS_H
#define STUDENTGENERICS_H

#include <iostream>
#include <string>
using namespace std;

template<typename T>
class StudentGenerics {
private:
    string name;
    int age;
    T grades;
    public:
    StudentGenerics(string name, int age, T grades);

    void display() const;
    void setGPA(T grades);
    T getGPA() const;

};

// Ukljucujemo implementaciju
#include "StudentGenerics.tpp"
#endif //STUDENTGENERICS_H
