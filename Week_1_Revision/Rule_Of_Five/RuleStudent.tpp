#include "RuleStudent.h"
#include <iostream>
using namespace std;

template <typename T>
RuleStudent<T>::RuleStudent(string name, int age, T gpa) : name(name), age(age) {
      this->gpa = new T(gpa);
  }


  // Copy Constructor (Deep Copy) - Second Rule
  template <typename T>
RuleStudent<T>::RuleStudent(const RuleStudent& other) : name(other.name), age(other.age) {
    this->gpa = new T(*other.gpa);
}

// Copy Assignment Operator - Third Rule
template <typename T>
RuleStudent<T>& RuleStudent<T>::operator=(const RuleStudent& other) {
    if (this == &other) return *this;  // Sprečavanje samododeljivanja
    delete gpa;  // Oslobađanje stare memorije
    this->name = other.name;
    this->age = other.age;
    this->gpa = new T(*other.gpa);
    return *this;
}

// Move Constructor - Fourth Rule
template <typename T>
RuleStudent<T>::RuleStudent(RuleStudent&& other) noexcept
    : name(std::move(other.name)), age(other.age), gpa(other.gpa) {
    other.gpa = nullptr;
    other.name = "";  // ✅ Resetujemo ime da izbegnemo ispis praznog imena u destruktoru
}

// Move Assignment Operator - Fifth Rule
template <typename T>
RuleStudent<T>& RuleStudent<T>::operator=(RuleStudent&& other) noexcept {
    if (this == &other) return *this;

    delete gpa;  // Oslobađanje stare memorije

    std::cout << "Move assignment: " << this->name << " preuzima podatke od "
              << (other.name.empty() ? "(empty object)" : other.name) << std::endl;

    // ✅ OVA LINIJA ČUVA `Ana` ako `s5` već ima ime
    if (this->name.empty()) {
        this->name = std::move(other.name);
    }

    this->age = other.age;
    this->gpa = other.gpa;

    other.gpa = nullptr;
    other.name = "";  // Resetujemo ime da izbegnemo dupli ispis u destruktoru

    return *this;
}



// Destructor - First Rule
template <typename T>
RuleStudent<T>::~RuleStudent() {
    delete gpa;
    gpa = nullptr;

    // ✅ Provera da li ime postoji pre ispisa
    if (!name.empty()) {
        std::cout << "Destructor: " << name << " destroyed\n";
    } else {
        std::cout << "Destructor: (empty object) destroyed\n";
    }
}



template <typename T>
void RuleStudent<T>::display() const {
    std::cout << "Name: " << name << ", Age: " << age << ", GPA: " << *gpa << std::endl;
}