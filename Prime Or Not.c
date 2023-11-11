/*  Write down a function that will take a
number as a parameter and will return
1 if the number is a prime number and
0 otherwise. In your main function take
a number as user input and use this
function, to print whether the number
is a prime number or not.  */


#include<stdio.h>
int isPrime(int n)
{
    int i, c = 0;
    for(i = 1; i <= n; i++)
    {
        if (n%i == 0)
            c++;
    }
    if (c == 2) return 1;
    else return 0;
}
void main(void)
{
    int n,p;
    scanf("%d",&n);
    p = isPrime(n);
    if(p == 1) printf("YES");
    else printf("NO");
}

