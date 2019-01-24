#include <iostream>
using namespace std;

int main() 
{
	int t,i=0;
	cin>>t;
	while(i<t)
	{
        int a,b;
		cin>>a>>b;
		a=a/3;
		b=b/3;
			cout<<a*b<<endl;
		i++;
	}
	return 0;
}
