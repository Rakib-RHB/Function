#include<stdio.h>

int max(int i, int j)
{
    int r;
    if(i < j)
    {
        r = j;

    }
    else
    {
        r = i;
    }
    return r;
}

int main()
{
    int n,N,p;
    scanf("%d%d",&n,&N);
    max(n,N);
    printf("%d",p);
}

