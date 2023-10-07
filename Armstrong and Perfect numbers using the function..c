/*Write a program in C to check Armstrong  using the function.
Test Data :
Input any number: 371
Expected Output :

 The 371 is an Armstrong number.
 The 371 is not a Perfect number.
*/



#include<stdio.h>
int Armstrong(int n)
{
    int r,s=0,num;
    num = n;
    while (num != 0)
    {
        r = num % 10;
        s += r * r * r;
        num = num / 10 ;
    }
    return ( n == s);
}
int main()
{
    int n;
    scanf("%d",&n);
    if(Armstrong(n))
    {
        printf("The %d is an Armstrong number . \n",n);
    }
    else
    {
        printf("The %d is Not an Armstrong number . \n",n);
    }
    return 0;
}

