#include <stdio.h>    //<stdio.h>は、C言語の標準入出力ライブラリをインクルードします。これにより、printf（画面に文字を表示する関数）などを使えます。
long combi(int, int); // longは戻り値の型で、大きな数を扱うために使います（intより大きな数を扱える）。(int, int)は、関数が2つの整数（nとr）を受け取ることを示します。

void main(void) // main関数は、プログラムの実行が始まる場所です。voidは、戻り値がないことを意味します（通常はint main()が推奨されますが、このコードではvoidになっています）。
{
    int n, r;
    for (n = 0; n <= 5; n++)
    {
        for (r = 0; r <= n; r++)
        {
            printf("%dC%d=%ld ", n, r, combi(n, r)); //%dは整数（nとr）を、=ldはlong型の値（combi(n, r)の結果）を表示します。
        }
        printf("¥n");
    }
}
long combi(int n, int r)
{
    int i;
    long p = 1;
    for (i = 1; i <= r; i++)
    {
        p = p * (n - i + 1) / i;
    }
    return p;
}