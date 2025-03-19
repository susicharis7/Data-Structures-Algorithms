//
// Created by Haris on 19. 3. 2025..
//

#ifndef CAR_H
#define CAR_H

#include <iostream>
#include <string>
using namespace std;

class Car {
public:
    string brand;
    string model;
    int year;

    Car(string brand, string model, int year);

    void prikaziInformacije() const;
};



#endif //CAR_H
