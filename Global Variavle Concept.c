#include<stdio.h>
int a,b; // int a,b they are Golobal Variavle.
int min(void)
{
    int r;
    if(a<b)
    {
        r = a;
    }
    else
    {
        r= b;
    }
    return r;
}
int main()
{
    int p;
    scanf("%d%d",&a,&b);
    p = min();
    printf("%d",p);
}
