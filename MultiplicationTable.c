#include <stdio.h>

int main()
{
    int num;
    printf("Enter the number you want muliplication table of:\n");
    scanf("%d", &num);

    printf("Multiplication table of %d is as follows:\n", num);

    //  printf("%d x 1 = %d\n", num, num * 1);
    for (int i = 1; i < 11; i++)
    {
        printf("%d x %d = %d\n", num, i, num * i);
    }

    return 0;
}
