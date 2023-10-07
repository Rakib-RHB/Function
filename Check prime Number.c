/* Write a program in C to check whether a number is
 a prime number or not using the function.

Test Data :
Input a positive number : 5
Expected Output :

The number 5 is a prime number.*/


#include<stdio.h>

int prime(int n)
{

    int i;
    for(i = 2; i < n; i++)
    {
        if(n % i == 0)
        {
            return 0;
        }

    }

    return 1;
}

int main()
{
    int N;
    printf("Input a positive Number : ");
    scanf("%d",&N);
    int d = prime(N);
    if(d == 1)
    {
        printf("This Number is Prime");
    }
    else
    {
        printf("This Number Not is Prime");

    }
return 0;
}



