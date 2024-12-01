// This is the code for that who can drive car or bike,under 18 can't drive but above 18 can drive//

#include <stdio.h>
int main()
{
  int age;
  printf("Enter Your age\n");
  scanf("%d", &age);
  if (age > 18)
  {
    printf("You are eligible for driving");
  }

  else
  {
    printf("You are not eligible");
  }

  return 0;
}
