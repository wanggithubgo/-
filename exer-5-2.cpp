#include<iostream.h>
float fun(int n)
{
	float S=0,p=0;
	int i;
	for(i=1;i<=n;i++)
	{
		p+=i;
		S+=1/p;
}
	return S;
}
void main()
{
	int n;
	float S;
     cin>>n;
	 S=fun(n);
	 cout<<"S="<<S<<endl;
}
