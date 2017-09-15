#include<iostream.h>
void main()
{
	int i,x;
	cout<<"please input i:";
	cin>>x;
	if(x<10) i='a';
	if(10<=x&&x<=99) i='b';
	if(100<=x&&x<=999) i='c';
	switch(i)
	{
	case 'a':cout<<"i<10\n";break;
	case 'b':cout<<"10<=i<=99\n";break;
	case 'c':cout<<"100<=i<=999\n";break;
	default:cout<<":i>=1000\n";
	}
}