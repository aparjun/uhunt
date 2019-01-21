#include <iostream>
using namespace std;

int main() 
{
	int n,m,c,j=1;
	while(cin>>n)
	{
		cin>>m;
		cin>>c;
		if(n==0)
		{
			break;
		}
		cout<<"Sequence "<<j<<"\n";
		j++;
		int a[n],b,d=0,max=0,f=0;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		for(int i=0;i<m;i++)
		{
			cin>>b;
			d=d+a[b-1];
			a[b-1]=a[b-1]*(-1);
			if(max<d)
			{
				max=d;
			}
			if(d>c && f==0)
			{
				cout<<"Fuse was blown.\n";
				f++;
			}
		}
		if(f==0)
		{
			cout<<"Fuse was not blown.\n";
			cout<<"Maximal power consumption was "<<max<<" amperes.\n";
		}
		cout<<"\n";
	}
	return 0;
}
