#include <iostream>
using namespace std;

int main() 
{
	int t,i=1;
	cin>>t;
	while(i<=t)
	{
		int n,a=0,b=0;
		cin>>n;
		int ar[n];
		for(int j=0;j<n;j++)
		{
			cin>>ar[j];
			if(j>0)
			{
				if(ar[j]>ar[j-1])
				{
					a++;
				}
				if(ar[j]<ar[j-1])
				{
					b++;
				}
			}
		}
		cout<<"Case "<<i<<": "<<a<<" "<<b<<"\n";
		i++;
	}
	return 0;
}
