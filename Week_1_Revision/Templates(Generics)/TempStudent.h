//
// Created by Haris on 19. 3. 2025..
//

#ifndef TEMPSTUDENT_H
#define TEMPSTUDENT_H
#include <iostream>
#include <string>
using namespace std;


template <typename T>
class TempStudent {
private:
    string name;
    int age;
    T gpa;
public:
    TempStudent(string name, int age, T gpa);

    void display() const;

    void setGPA(T gpa);
    T getGPA();

};


#include "TempStudent.tpp"
#endif //TEMPSTUDENT_H
