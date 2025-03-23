#include "BankAccount.h"
#include <iostream>
using namespace std;

template<typename T>
BankAccount<T>::BankAccount(string owner, int accountNumber, T balance) : owner(owner), accountNumber(accountNumber) {
  this->balance = new T(balance);
  cout << "Created Bank Account Constructor: " << owner << endl;
}

template<typename T>
BankAccount<T>::~BankAccount() {
  delete balance;
  cout << "Deleted with destructor! : " << owner << endl;
}

template<typename T>
void BankAccount<T>::display() const {
  cout << "Owner: " << owner << endl;
  cout << "Account Number: " << accountNumber << endl;
  cout << "GPA : " << *balance << endl;
}
