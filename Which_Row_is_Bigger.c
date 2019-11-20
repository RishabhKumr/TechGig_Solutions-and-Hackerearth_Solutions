#include<stdio.h>
int main()
{
int n,i,j;
scanf("%d",&n);
int mat[n][n];
for( i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
    scanf("%d",&mat[i][j]);
}
}

int temp=0;
for(i=0;i<n;i++)
{
    int sum=0;

    for(j=0;j<n;j++)
    {
      sum = sum+mat[i][j];
    }
    if(sum > temp)
    {
        temp = sum;
    }
}
printf("%d",temp);
}
