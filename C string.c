//C string

#include<stdio.h>
int main()
{
    char string1[100];
    int i,v,c;
    v=c=0;
//user input//
    printf("Input a sentence: ");
    gets(string1);
    i=0;
    while(string1[i]!='\0')
    {
        if(string1[i]=='a' || string1[i]=='e' || string1[i]=='i' || string1[i]=='o' || string1[i]=='u')
        string1[i]=string1[i]-32;
        i++;

        if(string1[i]=='a' || string1[i]=='e' || string1[i]=='i' || string1[i]=='o' || string1[i]=='u')
        ++v;

        else if((string1[i]>='a'&& string1[i]<='z'))
        ++c;
    }
    printf("String converted: ");
    puts(string1);


    printf("\n\nstring length: %d\n",i);
    printf("vowels: %d\n",v);
    printf("consonant: %d\n",c);

    return 0;
}
