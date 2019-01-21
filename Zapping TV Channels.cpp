#include <iostream>
#include<algorithm>
using namespace std;

int main() 
{
	int a,b,c,d,e,f;
	while(1)
	{
		cin>>a;
		cin>>b;
		if(a<0)
		{
			break;
		}
		c=min(a,b);
		d=max(a,b);
	    e=d-c;
	    f=99-d;
	    f=f+c+1;
	    cout<<min(e,f)<<"\n";
	}
	return 0;
}
