#include<iostream.h>
void main()
{
int a,b;
cin>>a;
if(a%3==0||a%7==0) b=1;
else b=2;
switch(b)
{
case 1:cout<<"YES\n";break;
case 2:cout<<"NO\n";
}
}