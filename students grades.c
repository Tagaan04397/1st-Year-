#include <stdio.h>
#include <conio.h>


// C program that calculate the average of students grades//

int main()
{
    int id;
    float math1,sci2,eng3,fil4,CoArt5,average;
    char name;


    printf("Enter sutdent ID#:");
    scanf("%d",&id);
    printf("Enter students name:");
    scanf("%s",&name);



    printf("\nEnter marks obtained in Math1 subject:");
    scanf("%f",&math1);

    printf("Enter marks obtained in science2 subject:");
    scanf("%f",&sci2);

    printf("Enter marks obtained in english3 subject:");
    scanf("%f",&eng3);

    printf("Enter marks obtained in Filipino4 subject:");
    scanf("%f",&fil4);

     printf("Enter marks obtained in ContemporaryArt5 subject:");
    scanf("%f",&CoArt5);

    average=(math1+sci2+eng3+fil4+CoArt5)/5;
    printf("\naverage: %0.2f\n",average);

    if (average>=90)
    printf("Grade A");

    else if (average>=80)
    printf("Grade B");

    else if (average>=70)
    printf("Grade C");

    else if (average>=60)
    printf("Grade D");

    else
    printf("Grade F");


    return 0;
}