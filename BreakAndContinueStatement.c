#include <stdio.h>

int main()
{
    int i, age;
    for (i = 0; i < 10; i++)
    {
        printf("%d\nEnter your age\n", i);
        scanf("%d", &age);

        // This is the code to continue the statement if the value is greater than its actual value then it will break and restart the code //
        if (age > 10)
        {
            continue;
        }
        printf("Dragon has mystery\n");
        printf("Dragon has mystery\n");
        printf("Dragon has mystery\n");
        printf("Dragon has mystery\n");
        printf("Dragon has mystery\n");
    }

    return 0;
}
