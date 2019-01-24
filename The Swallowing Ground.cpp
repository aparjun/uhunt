#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int t,i=0;
	cin>>t;
	while(i<t)
	{
		int a,b,c,n,f=0;
		cin>>n;
		cin>>a;
		cin>>b;
		c=abs(a-b);
		for(int j=0;j<n-1;j++)
		{
		  cin>>a;
		  cin>>b;
		  if(abs(a-b)!=c)
		  {
		  	cout<<"no\n\n";
		  	f++;
		  	break;
		  }
		}
		if(f==0)
		{
			cout<<"yes\n\n";
		}
		
		i++;
	}

	return 0;
}
