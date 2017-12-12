#include<iostream.h>
void s(int *p,int *q)
{
	int k;
	k=*p;
	*p=*q;
	*q=k;
}
void main()
{
	int a[10],i;
	cout<<"请输入十个整数:";
	for(i=0;i<10;i++)
		cin>>a[i];
	int t,b[10];
	for(i=0,t=9;i<10;i++,t--)
	{
		int *p,*q;
		p=&a[i];
		q=&b[t];
		s(p,q);
	}
	cout<<"反序输出为:";
	for(i=0;i<10;i++)
		cout<<b[i]<<" ";
}
