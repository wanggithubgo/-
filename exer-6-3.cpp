#include <iostream.h>
#define N 20
void main()
{
	int i,a[N];
	a[0]=1;
	a[1]=1;
	for(i=2;i<N;i++)
	{
		a[i]=a[i-1]+a[i-2];
	}
	for(i=0;i<N;i++)
	{
		cout<<"f"<<i+1<<"="<<a[i]<<"  ";
		if((i+1)%5==0)
			cout<<endl;
	}
	cout<<endl;
}

