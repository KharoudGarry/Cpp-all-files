#include<iostream>
using namespace std;
main()
{
	int i,j,s=0,k=4;
	for(j=1;j<=5;j=j+1)
	{
		cout<<"*";
		for(i=1;i<=s;i=i+1)
		{
			cout<<" ";
		}
		cout<<"*";
		for(i=1;i<=k;i=i+1)
		{
			cout<<" ";
		}
	    cout<<"*";
		s=s+1;
		k=k-1;
		q=q+1;
		cout<<"\n";
	}
}
