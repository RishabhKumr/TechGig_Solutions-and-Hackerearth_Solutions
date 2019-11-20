#include<stdio.h>
int main()
{
int n,m;
int temp1,temp2;
int sum1=0,sum2=0;
printf("Enter the first Number");
scanf("%d",&temp1);
printf("Enter the second Number");
scanf("%d",&temp2);
n = temp1;
m=temp2;
while(n!=0)
{
    sum1 = sum1+n%10;
    n=n/10;
}

while(m!=0)
{
        sum2 = sum2+m%10;
        m=m/10;
}

if(sum1==sum2)
{
    printf("Equal");
}
else if(sum1>sum2)
{

    printf("%d",temp1);
}
else
{
    printf("%d",temp2);
}
}
