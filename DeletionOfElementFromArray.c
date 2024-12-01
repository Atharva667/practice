#include <stdio.h>

int main()
{
    int arr[100], pos, c, n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the %d elements: ", n);

    for (int c = 0; c < n; c++)
        scanf("%d", &arr[c]);

    printf("Enter the location to delete elements: ");
    scanf("%d", &pos);

    if (pos >= n + 1)
        printf("Deletion is not possible.\n");
    else
    {
        for (int c = pos - 1; c < n - 1; c++)
            arr[c] = arr[c + 1];

        printf("Resultant Array : \n");

        for (c = 0; c < n - 1; c++)
            printf("%d\n", arr[c]);
    }

    return 0;
}