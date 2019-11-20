#include<stdio.h>
int main()
{
	int n;
	int arr[10];
	int i,j,temp;
	scanf("%d",&n);
	for( i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[j]<arr[i])
			{
				temp = arr[j];
				arr[j]=arr[i];
				arr[i]=temp;
			}
		}
	}

	for(i=0;i<n-1;i++)
    {

            if((arr[i+1]-arr[i]) != 1)
               {
                   printf("False");
                   break;
               }

    }
}
