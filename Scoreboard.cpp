#include <iostream>
using namespace std;

int main() 
{
    int t,i=0;
    cin>>t;
    while(i<t)
    {
    	char ch;
    	int k,l,m,a[1000]={0},b[1000]={0},c[1000]={0};
    	while(cin>>k)
    	{
    		if(k==null)
    		{
    			break;
    		}
    		a[k]=k;
    		cin>>l;
    		cin>>m;
    		cin>>ch;
    		if(ch=='C')
    		{
    			b[k]++;
    			c[k]=c[k]+m;
    		}
    		else
    		{
    			if(ch=='I')
    			{
    			 c[k]=c[k]+20;	
    			}
    		}
    	}
    	for(int j=0;j<100;j++)
    	{
    		cout<<a[j]<<" "<<b[j]<<" "<<c[j]<<endl;
    	}
    	i++;
    }
	return 0;
}
