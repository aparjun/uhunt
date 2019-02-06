#include <iostream>
using namespace std;

int main() 
{
	int n,m;
	while(cin>>n>>m)
	{
		
		if(n==0 && m==0)
		{
			break;
		}
		int ar[1000100]={0};
		int a,b,c,f=0;
		for(int j=0;j<n;j++)
		{
			cin>>a>>b;
			for(int i=a+1;i<=b;i++)
			{
				ar[i]++;
				if(ar[i]>1)
				{
					f=1;
					break;
				}
			}
		}
		for(int j=0;j<m;j++)
		{
			cin>>a>>b>>c;
			while(a<1000000)
			{
			  for(int i=a+1;i<=b && i<=1000000;i++)
			  {
				ar[i]++;
				if(ar[i]>1)
				{
					f=1;
					break;
				}
			  }	
			  a=a+c;
			  b=b+c;
			}
		}
		
		if(f==0)
		{
			cout<<"NO CONFLICT\n";
		}
		else
		{
			cout<<"CONFLICT\n";
		}
	}
	return 0;
}
