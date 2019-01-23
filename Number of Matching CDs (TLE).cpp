#include <iostream>
using namespace std;

int main() 
{
	int n,m;
	while(cin>>n)
	{
		cin>>m;
		int a[1000020],b[1000020],c=0;
		if(n==0 && m==0)
		{
			break;
		}
		int i=0;
		while(i<n)
		{
			cin>>a[i];
			i++;
		}
		i=0;
		while(i<m)
		{
			cin>>b[i];
			i++;
		}
		for(int j=0;j<n;j++)
		{
			for(int k=0;k<m;k++)
			{
				if(a[j]==b[k])
				{
					c++;
				}
			}
		}
		cout<<c<<"\n";
	}
	return 0;
}
