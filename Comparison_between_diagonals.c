#include<stdio.h>
//This problem has incorrect test case mentioned on Techgig
int main()
{
int n,i,j;
scanf("%d",&n);
int mat[n][n];
for(i=0;i<n;i++)
{
    for(j=0;j<n;j++)
    {
        scanf("%d",&mat[i][j]);
    }
}

int sum1=0;
int sum2=0;
for(i=0;i<n;i++)
{
    for(j=0;j<n;j++)
    {
        if(i==j)
        {
            sum1 = sum1 + mat[i][j];
        }
        if((i+j)==(n-1))
        {
            sum2 = sum2 + mat[i][j];
        }
    }
}
if(sum1==sum2)
{
    printf("Equal");
}
else if(sum1 > sum2)
{

    printf("Diagonal 1");
}
else{
    printf("Diagonal 2");
}
}
