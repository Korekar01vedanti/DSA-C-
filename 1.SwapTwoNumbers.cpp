#include<iostream>
using namespace std;

int main()
{
	int a,b,temp;
	cout<<"Enter Two Numbers\n";
	cin>>a>>b;
	cout<<"\nBefore swapping\n"<<"a= "<<a<<"  b= "<<b;
	
	temp=a;
	a=b;
	b=temp;
	
	cout<<"\n\nAfter swapping\n"<<"a= "<<a<<"  b= "<<b;
	return 0;
}
