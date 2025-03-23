//
// Created by Haris on 20. 3. 2025..
//

#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H
#include <iostream>
using namespace std;

template <typename T>
class BankAccount {
private:
    string owner;
    int accountNumber;
    T* balance;
public:
    BankAccount(string owner, int accountNumber, T balance);
    ~BankAccount();

    void display() const;
};


#include "BankAccount.tpp"
#endif //BANKACCOUNT_H
