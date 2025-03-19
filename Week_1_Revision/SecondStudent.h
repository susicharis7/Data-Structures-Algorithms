//
// Created by Haris on 19. 3. 2025..
//

#ifndef SECONDSTUDENT_H
#define SECONDSTUDENT_H

#include <iostream>
#include <string>
using namespace std;



class SecondStudent {
private:
    string name;
    int age;
    double gpa;

public:
    SecondStudent(string name, int age, double gpa);

    void display();

    void setName(string name);
    string getName();

    void setAge(int age);
    int getAge();

    void setGPA(double gpa);
    double getGPA();
};



#endif //SECONDSTUDENT_H
