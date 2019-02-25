#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
		int m,d,k,ar[20],s=0;
		cin>>m;
		for(int i=0;i<=m;i++)
		{
			cin>>ar[i];
		}
		cin>>d>>k;
		int p=0,prev=0,n;
		for(n=1;;n++)
		{
			prev=p;
                        p+=n*d;
                       if(prev<k && k<=p)
            {
            	break;
            }
		}
		for(int i=0;i<=m;i++)
		{
			s=s+ar[i]*(int)pow(n,i);
		}
		cout<<s<<endl;
	}
	return 0;
}
