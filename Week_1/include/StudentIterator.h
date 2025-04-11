#ifndef STUDENTITERATOR_H
#define STUDENTITERATOR_H

#include <iostream>
#include <string>

template <typename T>
class StudentIterator {
private:
    std::string name;
    T gpa;

public:
    StudentIterator(const std::string& name, T gpa);

    bool operator>(const StudentIterator& other) const;

    void display() const;
};

#include "StudentIterator.tpp"

#endif
