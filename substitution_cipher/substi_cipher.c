#include <stdio.h>

int main(void)
{
    char table[] = {'Q', 'W', 'E', 'R', 'T', 'Y', 'U', 'I', 'O', 'P',
                    'A', 'S', 'D', 'F', 'G', 'H', 'J', 'K', 'L',
                    'Z', 'X', 'C', 'V', 'B', 'N', 'M'};
    const char *ango = "KSOIDHEPZ";
    int index;
    while (*ango != '\0')
    {
        printf("Processing: %c\n", *ango); // デバッグ: 処理中の文字
        if ('A' <= *ango && *ango <= 'Z')
        {
            index = *ango - 'A';
            printf("Index: %d, Output: %c\n", index, table[index]); // デバッグ: インデックスと出力文字
            putchar(table[index]);
        }
        else
        {
            printf("Non-alphabet: %c\n", *ango); // デバッグ: 非アルファベット
            putchar(*ango);
        }
        ango++;
    }
    printf("\n");
    return 0;
}