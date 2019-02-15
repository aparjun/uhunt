#include <iostream>
using namespace std;

int main()
{
	int n;
	cout<<"PERFECTION OUTPUT\n";
	while(cin>>n)
	{
		if(n==0)
		{
			cout<<"END OF OUTPUT\n";
			break;
		}
		int c=0;
		for(int i=1;i<=n/2;i++)
		{
			if(n%i==0)
			{
				c=c+i;
			}
		}
		if(c==n)
		{
			printf("%5d",n);
			cout<<"  PERFECT\n";
		}
		else
		{
			if(c<n)
			{
				printf("%5d",n);
				cout<<"  DEFICIENT\n";
			}
			else
			{
				printf("%5d",n);
				cout<<"  ABUNDANT\n";
			}
		}
	}
	return 0;
}
