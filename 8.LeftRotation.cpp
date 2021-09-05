#include<iostream>
using namespace std;

int main()
{
	int n,d;
	cout<<"\nEnter the value of n and d"<<endl;
	cin>>n>>d;
	int A[n];
	
	cout<<"\nEnter The array elements :"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>A[i];
	}
	cout<<"\nArray elements after rotation :";
	for(int i=0;i<n;i++)
	{
		cout<<A[(i+d)%n]<<" ";
	}
	return 0;
}
