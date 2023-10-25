# チャレンジ5: さまざまな関係

1. `School`、`Teacher`、`Student` の各クラスを作成します。ヘッダーファイルとソースファイルに分けてこれらのクラスを書いてください。
2. `Teacher` は複数の `Student` を持ち、`Student` は複数の `Teacher` を持つことができます （多対多の関連）。
3. `School` は複数の `Teacher` と `Student` を管理する必要があります (集約)。
4. `School` クラスには `Student` を登録するための `enrollStudent` メソッドと、`Teacher` を雇うための `hireTeacher` メソッド、`Student` を `Teacher` に割り当てるための `assignStudent` メソッドを実装してください。
5. `School` オブジェクトを作成して `Teacher`を雇い、何人かの `Student` を登録した後、これらの `Student` を `Teacher` に割り当ててこのコードの動作を確認します。
