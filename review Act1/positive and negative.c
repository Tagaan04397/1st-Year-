#include <stdio.h>

int main()
{
    int num;

    printf("Enter any number: ");
    scanf("%d", &num);

    switch (num > 0)
    {
    case 1:
        printf("%d is postive integer", num);
    break;
    case 0:
        switch (num < 0)
          {
            case 1:
                printf("%d is negative integer.", num);
                    break;
             case 0:
                printf("%d zero.", num);
                    break;
        }
        break;
    }

    return 0;
}