#include "Search.h"
#include <iostream>
using namespace std;

template<typename Data>
int Search::linear_search(const Data* elements, const int size, const Data& key) {
      for(int i = 0; i < size; i++) {
            if(elements[i] == key)  {
                return i;
            }

      }
      return -1;
}


template<typename Data>
int Search::binary_search(const Data* elements, const int size, const Data& key) {
    int low = 0;
    int high = size - 1; // jer krece od 0

    while(low <= high) { // postavljamo samo da ne bi terminateao program (ono sto radimo ako ne bi nasli elemente)
         int mid = low + (high - low) / 2;
         if(key == elements[mid]) {
          return mid;
         } else if (key < elements[mid]) {
           high = mid - 1;
         } else {
           low = mid + 1;
         }
    }
    return -1;
}
