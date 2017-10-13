#include<stdio.h>
int main()
{ 
	int x,y,z;
	z=10;
	for (x=1;x<=99;x++)
	{
		if (x==z)
			z*=10;
		y=x*x;
		if(y%z==x)
			printf("%ld\t%ld\n",x,y);
	}
}