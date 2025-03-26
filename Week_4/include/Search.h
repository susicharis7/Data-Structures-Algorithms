#ifndef SEARCH_H
#define SEARCH_H
#include <iostream>
using namespace std;


namespace Search {
    template<typename Data>
    int linear_search(const Data* elements, int size, const Data& key);

    template<typename Data>
    int binary_search(const Data* elements, int size, const Data& key);
}


#include "Search.tpp"
#endif //SEARCH_H
