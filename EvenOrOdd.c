// This is the example of even and odd //

// This is the code of The number is even or Odd, We can find it by  writing ths script//

#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter a Number\n");
    scanf("%d", &a);
    if (a % 2 == 0)
    {
        printf("%d is even\n", a);
    }

    else
    {

        printf("%d is odd\n", a);
    }
    return 0;
}