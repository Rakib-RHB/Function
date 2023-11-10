/*Write down a function that will take a
set of numbers as a parameter and will
find and return maximum value within
the set. Show how we can use this
function from main to find and print
maximum value.*/



#include<stdio.h>
int findMax(int x[], int n)
{
    int i, max;
    max = x[0];
    for(i = 1; i < n; i++)
    {
        if (max < x[i])
            max = x[i];
    }
    return max;
}
void main(void)
{
    int a[] = {34, 21, 65, 78, 90};
    int b[] = {4, 2, 8};
    int r;
    r = findMax(a,5);
    printf("%d\n", r);
    r = findMax(b,3);
    printf("%d", r);
}
