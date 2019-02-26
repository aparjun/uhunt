#include <iostream>
using namespace std;

int main() 
{
	int n,k;
	while(cin>>n>>k)
	{
		int c=n;
		while(n>=k)
		{
			c=c+(n/k);
			n=(n/k)+(n%k);  // Or use formula n+(n-1)/(k-1)
		}
		cout<<c<<endl;
	}
	return 0;
}
