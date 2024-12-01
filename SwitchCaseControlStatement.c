#include <stdio.h>
int main()
{
    int age;
    printf("Enter your age\n");
    scanf("%d", &age);

    switch (age)
    {
    case 1:
        printf("The age is 3\n");
        break;

    case 2:
        printf("The age is 15\n");
        break;

    case 3:
        printf("The age is 23\n");
        break;

    default:
        printf("The age is not 3,15,23\n");
        break;
    }
    return 0;
}
