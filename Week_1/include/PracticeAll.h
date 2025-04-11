#ifndef PRACTICEALL_H
#define PRACTICEALL_H
#include <iostream>
using namespace std;

template <typename T>
class StudentPractice {
  private:
    string name;
    T* gpa;

  public:
    StudentPractice(string name, T gpa);
    ~StudentPractice();
    StudentPractice(const StudentPractice& other);
    StudentPractice& operator=(const StudentPractice& other);
    StudentPractice(StudentPractice&& other) noexcept;


    void print() const;

};





#include "PracticeAll.tpp"
#endif //PRACTICEALL_H
