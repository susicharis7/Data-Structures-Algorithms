#ifndef SORT_H
#define SORT_H
#include <iostream>
using namespace std;

namespace Sort {
    template<typename Data>
    static void swap(Data* arr, int a, int b);

    template<typename Data>
    void bubble_sort(Data* arr, int len);
}


#include "Sort.tpp"
#endif //SORT_H
