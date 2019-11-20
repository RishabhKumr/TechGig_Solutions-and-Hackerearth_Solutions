#include<stdio.h>
int main()
{
    int n,temp,odd=0,even=0;
    scanf("%d",&n);
    while(n!=0)
    {
        temp = n % 10;

        if(temp%2==0)
        {
            even = even+temp;
        }
        else{
            odd=odd+temp;
        }
         n=n/10;
    }
    int r;
 if(odd>even)
 {
    r = odd-even;
    printf("%d",r);
 }
 else
 {

     r = even-odd;
     printf("%d",r);
 }
}
