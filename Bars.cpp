#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,p,q,s=0,f=0;
		cin>>n>>p;
		int a[p];
		for(int i=0;i<p;i++)
		{
			cin>>a[i];
		}
		q=pow(2,p);
		for(int i=0;i<q;i++) //To find all subsets
	    {
		  for(int j=0;j<p;j++)
		  {
			if((i&(1<<j))>0)
			{
			 s=s+a[j];	
			}
		  }
		  if(s==n)
		  {
		  	cout<<"YES\n";
		  	f++;
		  	break;
		  }
		  s=0;
	    }
		if(f==0)
		{
			cout<<"NO\n";
		}
	}
	return 0;
}
