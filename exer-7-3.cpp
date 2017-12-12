#include<iostream.h>
void s(int *p,int *q)
{
	int t;
	t=*p;
	*p=*q;
	*q=t;
}
void main()
{
	int a[10],i;
	cout<<"请输入十个整数:";
	for(i=0;i<10;i++)
		cin>>a[i];
	int *p=a,*q=a;
	for(i=0;i<10;i++)
	{
		if(*p<a[i])
			p=&a[i];
		else
			if(*q>a[i])
				q=&a[i];
	}
	s(p,q);
	for(i=0;i<10;i++)
		cout<<a[i]<<" ";
}
