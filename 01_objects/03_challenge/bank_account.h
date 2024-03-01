// コードを入力してください
#pragma once

class BankAccount{
    public:
        BankAccount(double balance);
        void deposit(double dep);
        void withdraw(double wd);
        double get_balance();
    private:
        double balance;
};