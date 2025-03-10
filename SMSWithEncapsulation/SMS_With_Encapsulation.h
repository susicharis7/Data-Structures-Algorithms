//
// Created by Haris on 9. 3. 2025
//

/*
 This is a Header Guard
 It prevents a file from being included multiple times in the same compilation unit.
 It works by defining a unique preprocessor macro "#define" the first time the file is included.
 If the file is included again, the preprocessor sees that the macro is already defined and skips the second inclusion.
 */
#ifndef SMS_WITH_ENCAPSULATION_H
#define SMS_WITH_ENCAPSULATION_H


#include <string>
using namespace std;

class Student {
private:
    string name;
    int age;
    double gpa;
public:
    Student(string name, int age, double gpa);

    void display();

    void setName(string name);
    void setAge(int age);
    void setGPA(double gpa);

    string getName();
    int getAge();
    double getGPA();
};


#endif // SMS_WITH_ENCAPSULATION_H
