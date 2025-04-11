#ifndef STUDENTLISTITERATOR_H
#define STUDENTLISTITERATOR_H

#include "StudentIterator.h"
#include <vector>

template <typename T>
class StudentListIterator {
private:
    std::vector<StudentIterator<T>> students;

public:
    void addStudent(const StudentIterator<T>& s) { students.push_back(s); }

    using iterator = typename std::vector<StudentIterator<T>>::iterator;
    using const_iterator = typename std::vector<StudentIterator<T>>::const_iterator;

    iterator begin() { return students.begin(); }
    iterator end() { return students.end(); }

    const_iterator begin() const { return students.begin(); }
    const_iterator end() const { return students.end(); }
};

#endif
