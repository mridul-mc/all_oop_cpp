#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char st[' '],st2[' '],st3[' '];
	int i,len,j,k,le;
	
	printf("Enter first string:");
	gets(st);
	
	printf("Enter second string:");
	gets(st2);
	
	len=strlen(st);
	le=strlen(st2);
	
	for(i=0;i<len;i++)
	{
		st3[i]=st[i];
	}
	
	for(j=i,k=0;j<le*2;k++,j++)
	{
		st3[j]=st2[k];
	}

	puts(st3);
}
