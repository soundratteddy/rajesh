#include<stdio.h>
int main()
{
int a,i,sum=1;
scanf("%d",&a);
for(i=1;i<=a;i++)
{
     sum=sum*i;
} 
printf("%d",sum);
return 0;
}
