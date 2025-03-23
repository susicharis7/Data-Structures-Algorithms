//
// Created by Haris on 23. 3. 2025..
//

#ifndef BOOK_H
#define BOOK_H
#include <iostream>
using namespace std;

template <typename T>
class Book {
private:
    string title;
    string author;
    T* pageCount;

public:
    Book(string title, string author, T pageCount);
    ~Book();

    void display();
};


#include "Book.tpp"
#endif //BOOK_H
