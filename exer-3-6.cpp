#include<iostream.h>
#include<iomanip.h>
#define pi 3.1415926f
void main()
{
	int k,r,l,s;
	cin>>k>>r;
	l=2*pi*r;
	s=r*r*pi;
	switch(k)
	{
	case 1: cout<<s<<endl;break;
	case 2: cout<<l<<endl;break;
	case 3: cout<<s<<endl<<l<<endl;
	}
}
