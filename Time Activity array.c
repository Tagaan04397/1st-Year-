#include <stdio.h>


  int main()
{

    int ID, Pin, Num;

    int id[3][2] = {
    {1313, 3131} ,
    {1212, 2121} ,
    {1414, 4141} ,
};


    printf("ID Number: ");
    scanf("%d", &ID);
    
//***************************//
    printf("Your PIN: ");
    scanf("%d", &Pin);


    if (ID == id[0][0] && Pin == id[0][1])
    {
        printf("\nYou have Logged In successfully!\n ID#:1313 ");
    }
    else if (ID == id[1][0] && Pin == id[1][1])
    {
        printf("\nYou have Logged In successfully! \n ID#: 1212");
    }
    else if (ID == id[2][0] && Pin == id[2][1])
    {
        printf("\nYou have Logged In successfully !\n ID#:1414");
    }
    else if (ID != id[0][0] && Pin == id[0][1])
    {
        printf("\nInvalid ID#/Pin");
    }
    else if (ID != id[1][0] && Pin == id[1][1])
    {
        printf("\nInvalid ID#/Pin");
    }
    else if (ID != id[2][0] && Pin == id[2][1])
    {
        printf("\nInvalid ID#/Pin");
    }
    else
    {
        printf("\nInvalid ID#/Pin");
    }

    return 0;
}