#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int n;
	while(cin>>n)
	{
		int a[n],b[n],f=0;
		if(n==1)
		{
			cin>>n;
			cout<<"Jolly\n";
		}
		else
		{
		    for(int j=0;j<n;j++)
		    {
		    	b[j]=j+1;
		    	cin>>a[j];
		    	if(j>0)
		    	{
		    		a[j-1]=abs(a[j]-a[j-1]);
		    	}
		    }
		    a[n-1]=0;
		    sort(a,a+n-1);
		    for(int j=0;j<n-1;j++)
		    {
		    	if(a[j]!=b[j])
		    	{
		    		f=1;
		    	}
		    }
		    if(f==0)
		    {
		    	cout<<"Jolly\n";
		    }
		    else
		    {
		    	cout<<"Not jolly\n";
		    }
		}
	}
	return 0;
}
