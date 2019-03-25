#include<stdio.h>
	#include<conio.h>
	void main()
	{
	int a,b,c,r;
	scanf("%d",&a);
	r=a%10;
	b=a/10;
	c=r*r+b*b;
	printf("%d",c);
	 return 0;
	}
