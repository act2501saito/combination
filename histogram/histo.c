#include <stdio.h>
#define Num 20
void main(void)
{
    int a[] = {35, 25, 56, 787, 43, 66, 71, 73, 80, 90, 0, 73, 35, 65, 100, 78, 80, 85, 35, 50};
    int i, rank, histo[11];
    for (i = 0; i < 11; i++)
        histo[i] = 0;
    for (i = 0; i < Num; i++)
    {
        rank = a[i] / 10;
        if (0 <= rank && rank <= 10)
            histo[rank]++;
    }
    printf("Histogram:\n");
    for (i = 0; i < 11; i++)
    {
        printf("%2d|", i * 10);
        for (rank = 0; rank < histo[i]; rank++)
            printf("*");
        printf("\n");
    }
}