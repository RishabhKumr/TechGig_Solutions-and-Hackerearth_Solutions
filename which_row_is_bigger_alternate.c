#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d",&n);
    scanf("%d",&m);
    int mat[n][m];
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }
    int arr[10];

    for(i=0;i<n;i++)
    {
         int temp=0;
        for(j=0;j<m;j++)
        {
            temp = temp + mat[i][j];
        }
        arr[i]=temp;
    }
int temp1=arr[0];
int temp2=1;
for(i=1;i<=n;i++)
{
if(temp1<arr[i])
   {
       temp2=i;
       temp1=arr[i];
   }
}
printf("Row %d",temp2);
}
