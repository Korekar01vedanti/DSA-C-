#include<iostream>
using namespace std;

int main()
{
	int n,i,j,x,A[10];
	cout<<"\nEnter size of array : ";
	cin>>n;
	cout<<"\nEnter elements of array :\n";
	for(i=0;i<n;i++)
	{
		cin>>A[i];
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(A[i]<A[j])
			{
				x=A[i];
				A[i]=A[j];
				A[j]=x;
			}
		}
	}
	cout<<"\nSecond largest number : "<<A[1];
	return 0;
}
