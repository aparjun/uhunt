#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int t,n,j=0;
	cin>>t;
	while(j<t)
	{
		cin>>n;
		int a[n],i=0;
		while(i<n)
		{
			cin>>a[i];
			i++;
		}
		sort(a,a+n);
		j++;
		cout<<"Case "<<j<<": "<<a[n/2]<<endl;
	}
	return 0;
}
