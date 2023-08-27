#include <stdio.h>

float getArea(float r)
{
    return 3.1416*r*r;
}

int main()
{
     printf("%f\n",getArea(2));
 float X;
 printf("Enter the value of x: ");
scanf("%f", &X);
   // getArea(X);
//Y=getArea()*X*X;
    printf("%f",getArea(X));

}


