#include"iostream.h"
void main()
{
	int year,leap,m,x,sum;
	sum=0;
	m=0;
	for(year=2000;year<=3000;year++)
	{
		leap=1;
		for(x=2000;x<year;x++)
		{
			if(year%400==0)
				leap=1;
			else
				if(year%4==0&&year%100!=0)
					leap=1;
				else
					leap=0;
		}
		if(leap==1)
		{
			sum++;
			cout<<year<<" ";
			m++;
			if(m%10==0)
				cout<<endl;
		}
	}
	if(year%10!=0)
		cout<<endl<<"Sum="<<sum<<endl;
}




