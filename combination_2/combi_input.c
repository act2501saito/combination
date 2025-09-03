#include <stdio.h>
long combi(int n, int r);

int main(void)
{
    int n, r;
    printf("nを入力してください: ");
    scanf("%d", &n);
    printf("rを入力してください: ");
    scanf("%d", &r);

    if (n < 0 || r < 0 || r > n)
    {
        printf("エラー: nとrは0以上で、rはn以下でなければなりません。\n");
        return 1;
    }

    printf("%dC%d = %ld\n", n, r, combi(n, r));
    return 0;
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