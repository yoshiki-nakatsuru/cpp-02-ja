#include "tests.hpp"

#include <gtest/gtest.h>
#include <string>

#include "bank_account.h"

TEST(Test, CreateAccount) {    
    {
        BankAccount bank_account(0.0);
        ASSERT_EQ(bank_account.get_balance(), 0.0);
    }

    {
        BankAccount bank_account(100.0);
        ASSERT_EQ(bank_account.get_balance(), 100.0);
    }
}

TEST(Test, Deposit) {    
    BankAccount bank_account(0.0);
    bank_account.deposit(1.0);
    ASSERT_EQ(bank_account.get_balance(), 1.0);
}

TEST(Test, Withdraw) {    
    BankAccount bank_account(10.0);
    bank_account.withdraw(1.0);
    ASSERT_EQ(bank_account.get_balance(), 9.0);
}

TEST(Test, Overdraw) {    
    BankAccount bank_account(10.0);
    bank_account.withdraw(15.0);
    ASSERT_EQ(bank_account.get_balance(), 10.0);
}

TEST(Test, WithdrawNegativeAmount) {
    BankAccount bank_account(10.0);
    bank_account.withdraw(-15.0);
    ASSERT_EQ(bank_account.get_balance(), 10.0);
}

TEST(Test, DepositNegative) {
    BankAccount bank_account(10.0);
    bank_account.deposit(-15.0);
    ASSERT_EQ(bank_account.get_balance(), 10.0);
}
