#include <stdio.h>

int main()
{
    int multiArr[5][10];

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            multiArr[i][j] = (i + 1) + (j + 1);
        }
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("%d\n",multiArr[i][j]);
        }
    }
}