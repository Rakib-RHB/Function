#include<stdio.h>
float get_avg(int arr[], int size)
{
    int i;
    int sum = 0;
    for( i=0; i<size; i++)
    {
        sum+=arr[i];
    }
    return (float)sum/size;
}

int get_max(int arr[], int size)
{
    int max, i;
    max = arr[0];
    for(i =1; i<size; i++)
    {
        if(arr[i]>max)
        {
            max = arr[i];
        }
    }
    return max;
}
int main()
{
    printf("Enter the number of students: ");
    int n;
    scanf("%d", &n);
    int arr[n];
    int i;
    for(i=0; i<n; i++)
    {
        printf("marks for student #%d: ", i+1);
        scanf("%d", &arr[i]);
    }
    printf("avg %f\n", get_avg(arr, n));
    printf("max %d", get_max(arr, n));
}
