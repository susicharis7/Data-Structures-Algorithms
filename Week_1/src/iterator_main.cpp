#include "../include/StudentListIterator.h"
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    StudentListIterator<double> studentList;

    StudentIterator<double> s1("Tarik", 9.5);
    StudentIterator<double> s2("Haris", 8.0);
    StudentIterator<double> s3("Aldin", 10);
    StudentIterator<double> s4("Semha", 7.5);

    studentList.addStudent(s1);
    studentList.addStudent(s2);
    studentList.addStudent(s3);
    studentList.addStudent(s4);

    cout << "Student List before sorting:\n";
    for (const auto& student : studentList)
        student.display();

    std::sort(studentList.begin(), studentList.end(),
              [](const StudentIterator<double>& a, const StudentIterator<double>& b) {
                  return a > b;
              });

    cout << "\nStudent List after sorting (by GPA descending):\n";
    for (const auto& student : studentList)
        student.display();

    return 0;
}
