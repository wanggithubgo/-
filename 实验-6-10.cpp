#include<iostream.h>
#include<stdio.h>
float fun(double h)
{
	long n;
     h=h+(float)0.005;
     h=h*100;
	 n=(long)h;
	 h=(float)n;
	 h=h/100;
	 return h;
}
void main()
{
	float h;
	cin>>h;
	float fun(double h);
	cout<<"\n"<<fun(h)<<endl;
}
