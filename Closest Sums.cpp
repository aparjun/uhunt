#include <iostream>
using namespace std;

int main() 
{
	int t,c=0;
	while(cin>>t && t!=0)
	{
		c++;
		int a[t];
		int s,q,x,m=10000000;
	    for(int i=0;i<t;i++)
	    {
	    	cin>>a[i];
	    }
	    cin>>q;
	    cout<<"Case "<<c<<":\n";
	    for(int i=0;i<q;i++)
	    {
	    	cin>>x;
	    	for(int j=1;j<t;j++)
	    	{
	    		for(int k=0;k<j;k++)
	    		{
	    		 if(m>abs(x-(a[j]+a[k])))
	    		 {
	    			m=abs(x-(a[j]+a[k]));
	    			s=a[j]+a[k];
	    		 }
	    		}
	    	}
	    	m=10000000;
	    	cout<<"Closest sum to "<<x<<" is "<<s<<".\n";
	    }
	}
	return 0;
}
