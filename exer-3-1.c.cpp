#include<iostream.h>
void main()
{
	int x;
	cin>>x;
	if(x<10)
		cout<<x<<"x<10"<<endl;
	else
		if(x<100)
			cout<<x<<"10<=x<=99"<<endl;
		else
			if(x<1000)
				cout<<x<<"100<=x<=999"<<endl;
			else
				cout<<x<<"x>=1000"<<endl;
}
