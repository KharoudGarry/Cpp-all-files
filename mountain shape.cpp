#include<iostream>
using namespace std;
main()
{
	int i,j,s=4;
	for(j=1;j<=5;j=j+1)
	{
		for(i=1;i<=s;i=i+1)
		{
			cout<<" ";
		}
		for(i=1;i<=j;i=i+1)
		{
			cout<<i;
		}
		for(i=j-1;i>=1;i=i-1)
		{
		    cout<<i;
	    }
		cout<<"\n";
		s=s-1;
	}
}
