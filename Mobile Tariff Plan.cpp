#include <iostream>

using namespace std;

int main() 
{
	int t,i=1;
	cin>>t;
	while(i<=t)
	{
		int a,b,n,d,m=0,j=0;
		cin>>n;
		for(int k=0;k<n;k++)
		{
			cin>>d;
			a=d/30;
			b=d/60;
			
				a=a+1;
			
			
				b=b+1;
			
			m=m+(10*a);
			j=j+(15*b);
		}
		if(m<j)
		{
		 cout<<"Case "<<i<<": Mile "<<m<<"\n";	
		}
		else
		{
			if(m==j)
			{
			 cout<<"Case "<<i<<": Mile Juice "<<j<<"\n";	
			}
			else
			{
			 cout<<"Case "<<i<<": Juice "<<j<<"\n";
			} 
		}
		i++;
	}
	return 0;
}
