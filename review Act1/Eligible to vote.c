#include <stdio.h>

int main()
{
   int age;
   char name;
   
  printf("\nName:");
  scanf("%s",&name);
  
  printf("age: ");
  scanf("%d",&age);
  

  if (age >= 18)
  {
    printf("your eligible to vote");
  }
  else
  {
    printf("your not eligible to vote");
  }
  return 0;
}