//
// Created by Haris on 20. 3. 2025..
//

#ifndef CAR_H
#define CAR_H
#include <iostream>
#include <string>
using namespace std;

template <typename T>
class Car {
private:
    string brand;
    int year;
    T* horsepower;
public:
    Car(string brand, int year, T horsepower);
    ~Car();

    void display() const;

};


#include "Car.tpp"
#endif //CAR_H
