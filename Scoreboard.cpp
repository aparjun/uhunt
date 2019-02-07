#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main() 
{
    int t;
    cin>>t;
    string str;
    getline(cin,str);
    getline(cin,str);
    while(t--)
    {
    	char ch;
    	int k,l,m,a[110]={0},b[110]={0},c[110]={0},d[110][12][1]={0};
    	while(getline(cin,str) && str.size()>0)
    	{
    		stringstream ss(str);
	        ss >> k >> l >> m >> ch;
    		a[k]=k;
    		if(ch=='C')
    		{
    			b[k]++;
    			c[k]=c[k]+d[k][l][0]+m;
    		}
    		else
    		{
    			if(ch=='I')
    			{
    			 d[k][l][0]=d[k][l][0]+20;	
    			}
    		}
    	}
    	for(int j=0;j<100;j++)
    	{
    		if(a[j]!=0)
    		{
    		 cout<<a[j]<<" "<<b[j]<<" "<<c[j]<<endl;
    		}
    	}
    	cout<<endl;
    }
	return 0;
}
