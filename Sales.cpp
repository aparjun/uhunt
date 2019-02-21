#include <iostream>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,c=0,s=0;
		cin>>n;
		int ar[n];
		for(int i=0;i<n;i++)
		{
			cin>>ar[i];
		}
		for(int i=1;i<n;i++)
		{
			for(int j=0;j<i;j++)
		    {
			 if(ar[j]<=ar[i])
			 {
			 	c++;
			 }
		    }
		    s=s+c;
		    c=0;
		}
		cout<<s<<endl;
	}
	return 0;
}
