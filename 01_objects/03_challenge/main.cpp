// コードを入力してください

#include "bank_account.h"

int main(){
    BankAccount bank_account(100);

    bank_account.deposit(50);
    bank_account.withdraw(30);
    bank_account.withdraw(30);
    bank_account.withdraw(150);
}
