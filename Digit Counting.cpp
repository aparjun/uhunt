#include <iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,j;
		cin>>n;
		int ar[10]={0};
		for(int i=1;i<=n;i++)
		{
			j=i;
			while(j)
			{
				ar[j%10]++;
				j=j/10;
			}
		}
		for(int i=0;i<10;i++)
		{
			cout<<ar[i];
			if(i<9)
			{
				cout<<" ";
			}
		}
		cout<<endl;
	}
	return 0;
}
