#include<stdio.h>
	#include<string.h>
	int main()
	{
	char s[1000000];
	int i;
	scanf("%[^\n]",s);
	if(s[0]>='a'&&s[0]<='z')
	{
	s[0]-=32;
	}
	for(i=0;s[i]!='\0';i++)
	{
	if(s[i]== ' '&& s[i+1]>='a' && s[i+1]<='z')
	{
	s[i+1]=s[i+1]-32;
	}
	else
	{
	if(s[i]== ' '&&s[i+1]>='A' && s[i+1]<='Z')
	s[i+1]=s[i+1]+32;
	}
	}
	printf("%s",s);
	return 0;
	}
