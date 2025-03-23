//
// Created by Haris on 20. 3. 2025..
//

#ifndef TEMPLATESTUDENT_H
#define TEMPLATESTUDENT_H
#include <iostream>
#include <string>
using namespace std;


template <typename T>
class TemplateStudent {
private:
    string name;
    int age;
    T* gpa;
public:
    TemplateStudent(string name,int age, T gpa);
    ~TemplateStudent();

    void display() const;


};


#include "TemplateStudent.tpp"
#endif //TEMPLATESTUDENT_H
