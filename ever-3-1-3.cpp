#include"iostream.h"
void main()
{
	int i;
	cin>>i;
	while(i<10)
	{
		cout<<"i<10\n"<<endl;break;
	}
	while(i>=10&&i<=99)
	{
		cout<<"10=<i<=99\n"<<endl;break;
	}
	while(i>=100&&i<=999)
	{
		cout<<"100=<i<=999\n"<<endl;break;
	}
	while(i>=1000)
	{
		cout<<"i>=1000\n"<<endl;break;
	}
}

