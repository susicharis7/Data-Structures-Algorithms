#ifndef SELECTION_SORT_TPP
#define SELECTION_SORT_TPP
#include "SelectionSort.h"

template <typename T>
void SelectionSort<T>::sort(T arr[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        int minIndex = i;
        for (int j = i + 1; j < size; ++j) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        if (minIndex != i) {
            T temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
    }
}

#endif // SELECTION_SORT_TPP
