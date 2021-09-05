#include<iostream>
using namespace std;

int main()
{
	int limit,first,second,next,num;
	first=0;
	second=1;
	cout<<"\nEnter the limit of Fibonacci series\n"<<endl;
	cin>>num;
	cout<<"\nFirst "<<num<<" terms of Fibonacci series are :- \n"<<endl;
	
	for(int p=0;p<num;p++)
	{
		if(p<=1)
		{
			next=p;
		}
		else
		{
			next=first+second;
			first=second;
			second=next;
		}
		cout<<next<<" ";
	}
	return 0;
}
