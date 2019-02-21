#include <iostream>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,q,x,y,c=0;
		cin>>n;
		int a[n],b[n];
		string s[n];
		for(int i=0;i<n;i++)
		{
			cin>>s[i]>>a[i]>>b[i];
		}
		cin>>q;
		for(int i=0;i<q;i++)
		{
			cin>>x;
			for(int j=0;j<n;j++)
			{
				if(x>=a[j] && x<=b[j])
				{
					y=j;
					c++;
				}
			}
			if(c==1)
			{
				cout<<s[y]<<endl;
			}
			else
			{
				cout<<"UNDETERMINED\n";
			}
			c=0;
		}
		if(t>0)
		{
		 cout<<endl;
		}
	}
	return 0;
}
