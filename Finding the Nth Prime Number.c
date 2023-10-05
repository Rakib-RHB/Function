#include<stdio.h>


int prime (int num)
{
    int i;
    if (num <= 1)
    {
        return 0;
    }
    if(num <= 3)
    {
        return 1;
    }
    if(num % 2==0 || num % 3 == 0)
    {
        return 0;
    }
    for( i = 5; i * i <= num; i += 6)
    {
        if (num % i == 0 || num % (i + 2) == 0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int num;
    printf("Enter a Number : ");
    scanf("%d",&num);
    if(prime (num))
    {
        printf("%d is a Prime Number ",num);
    }
    else
    {
        printf("%d is Not a prime number ",num);
    }
}


