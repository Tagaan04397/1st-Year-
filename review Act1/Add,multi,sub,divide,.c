#include <stdio.h>

int main()
{
   int n1 , n2;
    printf("Enter first number:");
    scanf("%d",&n1);
    printf("enter second number:");
    scanf("%d",&n2);
    
    printf("\nAdition of %d + %d ",n1,n2);
    printf("= %d",(n1+n2));
    printf("\nsubtruction of %d - %d ",n1,n2);
    printf("= %d",(n1-n2));
    printf("\nMultiplication of %d * %d ",n1,n2);
    printf("= %d",(n1*n2));
    printf("\nDivision of %d / %d ",n1,n2);
    printf("= %d",(n1/n2));
   
   

    return 0;
}