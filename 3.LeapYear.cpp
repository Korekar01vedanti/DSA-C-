#include<iostream>
using namespace std;

int main()
{
	int year;
	cout<<"Enter a year : ";
	cin>>year;
	
	if((year % 4 == 0) && year % 100 != 0 || (year % 400 == 0) )
	{
		cout<<endl<<year<<" is a leap year.\n";
	}
	else
	{
		cout<<endl<<year<<" is not a leap year.";
	}
	return 0;
}
