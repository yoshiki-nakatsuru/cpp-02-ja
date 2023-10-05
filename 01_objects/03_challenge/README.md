# Challenge 3

Create a `BankAccount` class with the following features:

- A private member variable `balance` (type `double`) to store the account balance.
- A constructor that takes an initial balance as a parameter.
- A member function `deposit` that takes a value of type `double` as a single argument, deposits the given amount into the account, and prints the current balance after deposit.
- A member function `withdraw` that takes a value of type `double` as a single argument, withdraws the given amount from the account, and prints the current balance after withdrawal. If there are insufficient funds, print "Insufficient balance!" and do not perform the withdrawal.
- A member function `get_balance` to return the current balance.

Implement the `BankAccount` class and use it to perform a series of transactions.

Input:

```cpp
BankAccount bank_account(100);
bank_account.deposit(50);
bank_account.withdraw(30);
bank_account.withdraw(150);
```

Output:

```
150
120
90
Insufficient balance!
```
