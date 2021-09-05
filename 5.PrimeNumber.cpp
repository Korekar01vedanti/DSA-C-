#include<iostream>
using namespace std;

int main()
{
	int n,i,flag=0;
	cout<<"\nEnter a positive integer : "<<endl;
	cin>>n;
	
	for(i=2;i<=n/2;i++)
	{
		if(n%i==0)
		{
			flag=1;
			break;
		}
	}
	if(n==1)
	{
		cout<<"\n1 is neither prime nor composite."<<endl;
	}
	else
	{
		if(flag==0)
		{
			cout<<endl<<n<<" is a prime number."<<endl;
		}
		else
		{
			cout<<endl<<n<<" is not a prime number."<<endl;
		}
	}
	return 0;
}
