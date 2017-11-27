#include<stdio.h>
void mystrcat(char a[],char b[])
{
	int i=0,j=0;
	while(a[i++]!='\0'); 
	i--;
	while(b[j]!='\0')
	{ 
		a[i++]=b[j++];
	} 
	a[i]='\0';
}
int main()
{
	char a[100],b[100];
	gets(a);
	gets(b);
	mystrcat(a,b);	
	puts(a); 
	return 0;
}
