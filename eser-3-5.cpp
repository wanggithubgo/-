#include<iostream.h>
#include<math.h>
void main()
{
	float x,y,z,s;
	cout<<"Please enter three sides of the triangle:";
	cin>>x>>y>>z;
	s=(x+y+z)/2;
	cout<<"The area of this triangle is:"
	<<sqrt(s*(s-x)*(s-y)*(s-z))<<endl;
}