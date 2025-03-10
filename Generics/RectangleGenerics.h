//
// Created by Haris on 10. 3. 2025..
//

#ifndef RECTANGLEGENERICS_H
#define RECTANGLEGENERICS_H
#include <iostream>
using namespace std;

template<typename T>
class RectangleGenerics {
private:
    T width;
    T height;

public:
    RectangleGenerics(T width, T height);
    T area() const;
    T perimeter() const;
    void display() const;

    T getWidth() const;
    T getHeight() const;
    void setWidth(T width);
    void setHeight(T height);



};


#include "RectangleGenerics.tpp"
#endif //RECTANGLEGENERICS_H
