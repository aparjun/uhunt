#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
	int t,i=0;
	cin>>t;
	while(i<t)
	{
		float a,b;
		cin>>a>>b;
		a=a-1;
		b=b-1;
		a=a/3;
		b=b/3;
	
		a=ceil(a);
		b=ceil(b);
			cout<<b<<endl;
		i++;
	}
	return 0;
}
