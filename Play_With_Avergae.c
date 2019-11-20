#include<stdio.h>
#include<math.h>
int main()
{
	int n,arr[10];
	float odd,even;
	float sum;
	int i;
	int odd_avg=0,even_avg=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&arr[i]);
		if(arr[i]%2==0)
		{
			even_avg++;
			even=even+arr[i];
		}
		else
		{
			odd_avg++;
			odd=odd+arr[i];
		}
	}
	sum=((odd/odd_avg)+(even/even_avg));
	printf("%.0f",round(sum));
}
