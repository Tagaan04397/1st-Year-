int main ()
{ 
    int num, i, a[50]; 
    int Arts,Filipino,English; char input, path;

FILE *fpoint;

fpoint = fopen("text.txt", "w");
fclose(fpoint);

fpoint = fopen("text.txt", "a");

{

    printf("Name: ");
    scanf("%s", &a[i]);
    fprintf(fpoint,"Name: " "%s\n", &a[i]);
}
{

    printf("ID: ");
    scanf("%s", &a[i]);
    fprintf(fpoint,"ID: " "%s\n", &a[i]);
}

{
    printf("Arts Grade:" );
    scanf("%d", &Arts);
    fprintf(fpoint,"\nArts:" "%d\n", Arts);
}
{
    printf("Filipino Grade:" );
    scanf("%d", &Filipino);
    fprintf(fpoint,"Filipino:" "%d\n", Filipino);
}
{
    printf("English Grade:" );

    scanf("%d", &English);
    fprintf(fpoint,"English: " "%d\n\n", English);
}

int avg=(Arts+Filipino+English);
printf("Total Grade: %d\n" ,avg);
fprintf(fpoint,"Total Grade: " "%d\n", avg);

int ave=(Arts+Filipino+English)/3;
printf("Total Average: %d\n\n" ,ave);
fprintf(fpoint,"Total Average: " "%d\n", ave);

    fclose(fpoint);



fpoint = fopen("text2.txt", "w");
fclose(fpoint);

fpoint = fopen("text2.txt", "a");

{

    printf("Name: ");
    scanf("%s", &a[i]);
    fprintf(fpoint,"Name: " "%s\n", &a[i]);
}
{

    printf("ID: ");
    scanf("%s", &a[i]);
    fprintf(fpoint,"ID: " "%s\n", &a[i]);
}

{
    printf("Arts Grade:" );
    scanf("%d", &Arts);
    fprintf(fpoint,"\nMath:" "%d\n", Arts);
}
{
    printf("Filipino Grade:" );
    scanf("%d", &Filipino);
    fprintf(fpoint,"Filipino:" "%d\n", Filipino);
}
{
    printf("English Grade:" );

    scanf("%d", &English);
    fprintf(fpoint,"English: " "%d\n\n", English);
}

 avg=(Arts+Filipino+English);
printf("Total Grade: %d\n" ,avg);
fprintf(fpoint,"Total Grade: " "%d\n", avg);

 ave=(Arts+Filipino+English)/3;
printf("Total Average: %d\n\n" ,ave);
fprintf(fpoint,"Total Average: " "%d\n", ave);



    fclose(fpoint);




return 0;
}