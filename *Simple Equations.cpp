#include <iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a,b,c,x,q,f=0;
		int ar[5];
		cin>>a>>b>>c;
		q=a*a-c;
		q=q/2;
		for(x=-10000;x<=10000;x++)
		{
			if(-1*x*x*x+x*x*a-x*q+b==0) //Simplified equation by solving the given 3 equations
			{
			    ar[f]=x;
				f++;
			}
		}
		if(f!=3)
		{
			cout<<"No solution.";
		}
		else
		{
			cout<<ar[0]<<" "<<ar[1]<<" "<<ar[2];
		}
		cout<<endl;
	}
	return 0;
}
