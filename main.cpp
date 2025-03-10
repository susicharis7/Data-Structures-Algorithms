#include <iostream>

#include "Generics/RectangleGenerics.h"
#include "SMSWithEncapsulation/SMS_With_Encapsulation.h"
#include "Generics/StudentGenerics.h"
using namespace std;

int main() {
    // Pravimo objekat klase Student
    Student s1("Haris", 20, 9.5);
    s1.display();

    // Pozivamo settere
    s1.setName("Sumea");
    s1.setAge(21);
    s1.setGPA(8.7);

    // Ponovno prikazivanje sa novim podacima
    s1.display();




    // StudentGenerics

    cout << "\nStudent Generics: " << endl;
    StudentGenerics sc1("Harkiz",20, 9.5);
    sc1.display();


    // Box
    cout <<"\nRectangle Generics: " << endl;
    RectangleGenerics<int> rg1(20,10);
    rg1.display();

    cout << "Area again: " << rg1.area() << endl;
    cout << "Perimeter again: " << rg1.perimeter() << endl;

    return 0;
}
