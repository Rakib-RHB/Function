#include <stdio.h>
int GCD(int a , int b)
{
    int rem;
    while (b != 0)
    {
    rem = a % b;
    a = b;
    b = rem;
    }
    return 0;
}
int main()
{
  int x, y, z , res, fres;
  scanf("%d%d%d", &x, &y, &z);
   res = GCD(x,y);
   fres = GCD(res,z);
   printf("%d", fres);
}
