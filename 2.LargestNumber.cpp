#include<iostream>
using namespace std;

int main()
{
	int max,a,b,c;
	cout<<"Enter Three Numbers\n";
	cin>>a>>b>>c;
	
	max=a;
	
	if(b>max)
	{
		max=b;
	}
	else
	{
		if(c>max)
		{
			max=c;
		}
		
	}
	cout<<"\nThe Largest number among the three is : "<<max;
	return 0;
}
