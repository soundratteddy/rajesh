#include<stdio.h>
int main()
{
int rev=0,n,a,i,sum=1;
scanf("%d",&n);
int temp=n;
for(i=1;temp!=0;i++)
{
    a=temp%10;
   rev=rev*10+a;
    temp=temp/10;
}
 printf("%d",rev);
return 0;
}
