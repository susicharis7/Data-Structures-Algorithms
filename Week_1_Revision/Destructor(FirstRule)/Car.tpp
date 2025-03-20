#include "Car.h"
#include <iostream>
#include <string>
using namespace std;

template <typename T>
Car<T>::Car(string brand, int year, T horsepower) : brand(brand), year(year) {
    this->horsepower = new T(horsepower);
    cout << "Kreiran Car: " << brand << endl;
}

template <typename T>
Car<T>::~Car() {
  delete horsepower;
    cout << "Destructor destroyed: " << brand << endl;
}

template <typename T>
void Car<T>::display() const {
    cout << "Brand: " << brand << endl;
    cout << "Year: " << year << endl;
    cout << "Horsepower: " << *horsepower << endl;
}

