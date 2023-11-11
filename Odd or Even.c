#include<stdio.h>

void oddoreven(int i)
{
    if(i % 2 == 0)
    {
        printf("Even");

    }
    else
    {
        printf("Odd");
    }
}

int main()
{
    int n;
    scanf("%d",&n);
    oddoreven(n);
}
