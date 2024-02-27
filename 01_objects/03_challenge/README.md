# チャレンジ3
用意されているヘッダーファイルとソースファイルにコードを書き、インターフェースと実装を分けてください。`main` 関数は `main.cpp` 内に記述してください。

次の機能を備えた `BankAccount` クラスを作成します。

- 口座残高を格納するためのprivateメンバ変数 `balance` (`double` 型)
- 最初の口座残高を引数として受け取るコンストラクタ
- `double` 型の値を引数として受け取るメンバ関数 `deposit`。引数で指定した金額を口座に入金し、入金後の残高を出力する
- `double` 型の値を引数として受け取るメンバ関数 `withdraw`。引数で指定した金額を口座から出金し、出金後の残高を出力する。残高が不足している場合は、"Insufficient balance!"と出力して出金しない
- 現在の残高を返すメンバ関数 `get_balance`

`BankAccount` クラスを実装し、それを使用して一連の処理を実行します。

入力:

```cpp
BankAccount bank_account(100);
bank_account.deposit(50);
bank_account.withdraw(30);
bank_account.withdraw(30);
bank_account.withdraw(150);
```

出力:

```
150
120
90
Insufficient balance!
```
