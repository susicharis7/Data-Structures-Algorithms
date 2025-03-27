#include <array>
#include <iostream>
#include "../include/Search.h"
#include "../include/Sort.h"
#include "../include/Student.h"
using namespace std;

void search_demo();
void sort_demo();


int main() {
    search_demo();
    sort_demo();
}


void search_demo() {

    // Linear Search

    int elements[] = {5,-1,23,8,17,4,2,6};
    int size = sizeof(elements) / sizeof(int);
    cout << "Size o: " << size << endl;
    cout << "Linear Search: " << Search::linear_search(elements,size,17) << endl; // returna nam na kojem je indexu : `4`
    cout << "Linear Search (2) : " << Search::linear_search(elements,size,34) << endl;
    cout << endl;

    // Binary Search

    int elements2[] = {-5,-1,8,23,37,42,202,634};
    int size2 = sizeof(elements2) / sizeof(int);

    cout << "Binary Search: " << Search::binary_search(elements2,size2,37) << endl; // returna nam na kojem je indexu : `4`
    cout << "Binary Search (2) :" << Search::binary_search(elements2,size2,120) << endl;
    cout << endl;

}

void sort_demo() {

    // Bubble Sort

    int elements[] = {5,-1,23,8,17,4,2,6};
    int size = sizeof(elements) / sizeof(int);

    cout << "Bubble sort: " << endl;
    Sort::bubble_sort(elements,size);
    for (const int i : elements) {
        cout << i << endl;
    }
    cout << endl;

    // Operator Overloading (Test)
    cout << "Sorting structs: " << endl;
    Student students[] = {
        Student("Haris","IT",9.5),
        Student("Sumea","Stomatologija",8.1),
    };

    Sort::bubble_sort(students,2);
    for (const Student s : students) {
        cout << s.name << ", " << s.department << ", " << s.gpa << endl; // rasporedit ce po GPA od najmanjeg do najveceg
    }
}



