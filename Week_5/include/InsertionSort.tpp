#ifndef INSERTION_SORT_TPP
#define INSERTION_SORT_TPP
#include "InsertionSort.h"

template <typename T>
void InsertionSort<T>::sort(T arr[], int size) {
    for (int i = 1; i < size; ++i) {
        T key = arr[i];
        int j = i - 1;

        // Pomeri elemente koji su veći od key udesno
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            --j;
        }

        arr[j + 1] = key;
    }
}

#endif // INSERTION_SORT_TPP
