#include "Book.h"

#include <iostream>
using namespace std;

template <typename T>
Book<T>::Book(string title, string author, T pageCount) : title(title), author(author) {
  this->pageCount = new T(pageCount);
}

template<typename T>
Book<T>::~Book() {
  delete pageCount;
  cout << "PageCount on HEAP deleted!" << endl;
}

template<typename T>
void Book<T>::display() {
  cout << "Title: " << title << endl;
  cout << "Author: " << author << endl;
  cout << "Page Count: " << *pageCount << endl;
}