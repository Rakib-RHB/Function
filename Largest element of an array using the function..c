/* Write a program in C to get the largest element of an array using the function.
Test Data :
Input the number of elements to be stored in the array :5
Input 5 elements in the array :
element - 0 : 1
element - 1 : 2
element - 2 : 3
element - 3 : 4
element - 4 : 5
Expected Output :

The largest element in the array is : 5 */

#include<stdio.h>
int maximum(int n)
{
    int s[n];


    for(int i = 0; i < n; i++)
    {
        scanf("%d",&s[i]);
    }


    for(int j = 0; j < n; j++)
    {
        printf(" %d",s[j]);
    }





    int max = s[0];
    for (int I = 1; I < n; I++)
    {
        if ( max < s[I])
        {
            max = s[I];
        }

    }
    printf("\nMAXIMUM : %d \n", max);
}

int main()
{
    int n;
    printf("Enter a possitive Number : ");
    scanf("%d",&n);
    maximum(n);

}

