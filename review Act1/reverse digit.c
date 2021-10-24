// ReverseDigit

#include <stdio.h>


int ReverseDigit(int n)
{
    int rev_n = 0;
        while (n > 0) {
            rev_n= rev_n * 10 + n % 10;
            n= n/ 10;
        }
    return rev_n;
}


int main()
{
    int n = 987654321;
        printf("Reverse of n is %d", ReverseDigit(n));

    return 0;
}