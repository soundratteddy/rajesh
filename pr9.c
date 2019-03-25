#include <stdio.h>
	#include<conio.h>
	int main() 
	{
		int number,m,flag=0,count=0;
		int i,j;
		scanf("%d %d",&number,&m);
		for(j=number;j<=m;j++)
		{
		for(i=2;i<j;i++)
		{
			if(j%i==0)
			{
				flag=1;
				break;
			}
			else
			{
				flag=0;
			}
		}
		if(flag==0)
		{
			count=count+1;
		}
		}
		printf("%d",count);
	  return 0;
	}
