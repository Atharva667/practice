#include <stdio.h>

int main(int argc, char const *argv[])

{
    int length, breadth;
    printf("What is the length of the rectangle\n");
    scanf("%d", &length);

    printf("What is the breadth of the rectangle\n");
    scanf("%d", &breadth);

    printf("The area of your rectangle is %d", length * breadth);
    return 0;
}
