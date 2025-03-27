#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
#include <string>
using namespace std;


struct Student {
    const char* name;
    const char* department;
    double gpa;

    Student(const char* name, const char* department, const double gpa) : name(name), department(department), gpa(gpa) {}

    friend bool operator<(const Student &s1, const Student &s2) {
        return s1.gpa < s2.gpa;
    }

    friend bool operator>(const Student &s1, const Student &s2) {
        return operator<(s2,s1);
    }

    friend bool operator==(const Student &s1, const Student &s2) {
        return s1.gpa == s2.gpa;
    }

    friend bool operator!=(const Student &s1, const Student &s2) {
        return !operator==(s1,s2);
    }

    friend bool operator<=(const Student &s1, const Student &s2) {
        return !operator>(s1,s2);
    }

    friend bool operator>=(const Student &s1, const Student &s2) {
        return !operator<(s1,s2);
    }
};



#endif //STUDENT_H
