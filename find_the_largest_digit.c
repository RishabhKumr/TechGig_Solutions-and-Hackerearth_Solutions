#include<stdio.h>
int main()
{
	int num;
	int temp;
	int temp1=0;
	printf("Enter the Number");
	scanf("%d",&num);
	while(num!=0)
	{
		num=num%10;

        if(num > temp1)
		{
			temp1 = num;

			break;
		}

	}
	printf("%d",temp1);

}
