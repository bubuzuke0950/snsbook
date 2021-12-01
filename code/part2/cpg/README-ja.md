# 9.1. 中枢パターン生成器 (CPG) のモデル

## ファイル一覧
- `cpg.c`: CPGのコード
- `Makefile`: Makefile
- `README-ja.md`: 日本語の説明 (このファイル)

## コードの説明
特になし。

## コンパイル方法
9.1節の通り`make`する。テキストでは`make`しただけでは実行はされないが、こちらは実行も同時にされるようにした
(他のコードとの一貫性のため)。もしコンパイルだけしたければ
```
node00:~/snsbook/code/part2/cpg$ make cpg
```
とすればよい。

## 実行方法
テキスト通りに実行すればよい。`cpg.c`内の
```
#define W       (  -40.0 ) // connection weight
```
をこのままにしておけば図9.2bが、この値を0にすれば図9.2aが得られる。