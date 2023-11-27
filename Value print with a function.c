#include<stdio.h>
void print(int m,int x[][4])
{
    int i,j;
    for(i=0; i<m; i++)
    {
        for(j=0; j<4; j++)
        {
            printf("%d ",x[i][j]);
        }
        printf("\n");
    }

}

int main ()
{
    int m[3][4],i,j;
    for(i=0; i<3; i++)
    {
        for(j=0; j<4; j++)
        {
            scanf("%d",&m[i][j]);
        }
    }
    print(3,m);





}
