#include<iostream>
using namespace std;
main()
{
	int a,i;
	cout<<"a=";
	cin>>a;
	i=2;
	while(a>1)
	if(a%i==0)
	{
		cout<<i;
		a=a/i;
		if(a==1)
		{
			cout<<" ";
		}
		else
		{
			cout<<"*";
		}
	}
	else
	{
	  i=i+1;
    }
}
