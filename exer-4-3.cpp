#include<iostream.h>
void main()
{
	int i,m,n=0;
	cin>>i;
	m=i;
	while(1)
	{
		if(m%2==0)
		{
			m=m/2;
			n++;
			cout<<m<<"-";
			if(m==1)
				break;
		}
		else
		{
			m=m*3+1;
			n++;
			cout<<m<<"-";
		}
	}
	cout<<"\t"<<"²½Öè:"<<n<<endl;
}