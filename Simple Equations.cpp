#include <iostream>
#include <set>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		set<int>s;
		int a,b,c,x,q;
		cin>>a>>b>>c;
		q=a*a-c;
		q=q/2;
		for(x=0;x<=10000;x++)
		{
			if(-1*x*x*x+x*x*a-x*q+b==0)
			{
				cout<<x<<" ";
			}
		}
		cout<<endl;
	}
	return 0;
}
