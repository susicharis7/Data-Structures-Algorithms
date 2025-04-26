//
// Created by Haris on 26. 4. 2025..
//

#ifndef TIMSORT_H
#define TIMSORT_H


namespace TimSort {
    template<typename Data>
    void sort(Data* arr, int len, int threshold);

    template<typename Data>
    static void insertion_sort(Data* arr, int low, int high);

    template<typename Data>
    static void merge(Data* arr, Data* aux, int low, int mid, int high);

    static int calculate_run_length(int initial_length, int threshold);
}



#endif //TIMSORT_H
