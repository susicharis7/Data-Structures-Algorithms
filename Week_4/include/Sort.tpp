#include "Sort.h"
#include <iostream>
using namespace std;

// O(n^2) jer koristi double loop
template <typename Data>
void Sort::bubble_sort(Data* arr, const int len) {
    for (int i = 0; i < len; i++) {
        bool is_swapped = false;

        for (int j = 1; j < len-i; j++) {
            if (arr[j] < arr[j-1]) {
                swap(arr,j,j-1);
                is_swapped = true;
            }
        }
        if (!is_swapped) {
            break;
        }

    }

}

template<typename Data>
void Sort::swap(Data* arr, int a, int b) {
    Data temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
}
