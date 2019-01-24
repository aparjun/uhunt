#include <iostream>
using namespace std;

int main()
{
	int t,i=0;
	cin>>t;
	while(i<t)
	{
		int a,b,n,f=0;
		cin>>n;
		int ar[n];
		for(int j=0;j<n;j++)
		{
		  cin>>a>>b;
		  ar[j]=a-b;
		  if(ar[j]!=ar[0])
		  {
		  	f=1;
		  }
		}
		if(f==0)
		{
			if(i==t-1)
			{
			cout<<"yes\n";	
			}
			else
			{
			cout<<"yes\n\n";	
			}
		}
		else
		{
			if(i==t-1)
			{
			cout<<"no\n";	
			}
			else
			{
			cout<<"no\n\n";	
			}
			
		}
		i++;
	}

	return 0;
}
