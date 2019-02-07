#include <iostream>
using namespace std;

int main() 
{
	int n,i=0;
	while(cin>>n)
	{
		i++;
		if(n==0)
		{
			break;
		}
		int ar[n];
		int sum=0,c=0,d=0;
		for(int j=0;j<n;j++)
		{
			cin>>ar[j];
			sum=sum+ar[j];
		}
		sum=sum/n;
		for(int j=0;j<n;j++)
		{
			if(ar[j]>sum)
			{
				c=c+ar[j]-sum;
			}
			else
			{
				d=d+sum-ar[j];
			}
		}
		if(c>d)
		{
		 cout<<"Set #"<<i<<"\n";
		 cout<<"The minimum number of moves is "<<c<<".\n\n";
		}
		else
		{
		 cout<<"Set #"<<i<<"\n";
		 cout<<"The minimum number of moves is "<<d<<".\n\n";	
		}
	}
	return 0;
}
