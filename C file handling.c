//C file handling

#include<stdio.h>

int main ()
{
    int num, i, a[50];
    char input, path;

    FILE *fpoint;

    fpoint = fopen("text.txt", "w");
    fclose(fpoint);

    fpoint = fopen("text.txt", "a");

    printf("Input how many lines to be appended: ");
    scanf("%d", &num);




    for (i = 0; i < num; ++i)
    {

        printf(": ");
        scanf("%s", &a[i]);
        fprintf(fpoint, "%s\n", &a[i]);
    }





        fclose(fpoint);

    return 0;
}