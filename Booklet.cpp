#include <iostream>
using namespace std;

int main()
{
	int n;
	while(cin>>n)
	{
		if(n==0)
		{
			break;
		}
		int a,b,c,d,e=1,i=1;
		b=n%4;
		c=n/4;
		if(b!=0)
		{
			c=c+1;
		}
		d=abs(4*c-n);
		while(i<=c)
		{
			cout<<"Printing order for "<<i<<" pages:\n";
			if(e%2!=0)
			{
			    if(d>0)
			    {
			  	
			    }
			    else
			    {
			  	
			    }
			}
			else
			{
			    if(d>0)
			    {
			  	
			    }
			    else
			    {
			  	
			    }	
			}
			cout<<"Printing order for "<<i<<" pages:\n";
			if(e%2!=0)
			{
			    if(d>0)
			    {
			  	
			    }
			    else
			    {
			  	
			    }
			}
			else
			{
			    if(d>0)
			    {
			  	
			    }
			    else
			    {
			  	
			    }	
			}
			i++;
		}
	}

	return 0;
}
