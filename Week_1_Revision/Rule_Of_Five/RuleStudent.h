//
// Created by Haris on 19. 3. 2025..
//

#ifndef RULESTUDENT_H
#define RULESTUDENT_H
#include <iostream>
#include <string>
using namespace std;

template <typename T>
class RuleStudent {
private:
    string name;
    int age;
    T* gpa; // ovo znaci da pravi na heapu

public:
    // Constructor
    RuleStudent(string name, int age, T gpa);

    // Copy Constructor (Deep Copy) - Second Rule
    RuleStudent(const RuleStudent& other);

    // Copy Assignment Operator - Third Rule
    RuleStudent& operator=(const RuleStudent& other);

    // Move Constructor - Fourth Rule
    RuleStudent(RuleStudent&& other) noexcept;

    // Move Assignment Operator - Fifth Rule
    RuleStudent& operator=(RuleStudent&& other) noexcept;

    // Destructor - First Rule
    ~RuleStudent();

    void display() const;
};




#include "RuleStudent.tpp"
#endif //RULESTUDENT_H
