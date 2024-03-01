// コードを入力してください
#include "bank_account.h"
#include <iostream>
#include <string>

BankAccount::BankAccount(double balance):balance(balance){}

void BankAccount::deposit(double dep){
    if(dep >= 0.0){
        balance += dep;
    }
    get_balance();
}

void BankAccount::withdraw(double wd){

    if(wd < 0 ){
        get_balance();
        return;
    }
    
    double after_balance = balance - wd;

    if(after_balance < 0.0){
        std::cout << "Insufficient balance!" << std::endl;
    }else{
        balance = after_balance;
        get_balance();
    }
}

double BankAccount::get_balance(){
    return  balance;
}