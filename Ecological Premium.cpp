#include <iostream>
using namespace std;

int main() 
{
	int t,i=0;
	cin>>t;
	while(i<t)
	{
		int a,b,n,s=0;
		cin>>n;
		for(int j=0;j<n;j++)
		{
		 cin>>a>>b>>b;
		 s=s+a*b;
		}
		cout<<s<<endl;
		i++;
	}
	return 0;
}
