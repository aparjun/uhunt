#include <iostream>
#include <map>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    	int a,b,c;
    	map<int,int>m;
    	cin>>a>>b;
    	for(int i=0;i<a;i++)
    	{
    		cin>>c;
    	    m[c]++;	
    	}
    	for(int i=0;i<b;i++)
    	{
    		cin>>c;
    	    m[c]--;
    	}
    	c=0;
    	for(auto i=m.begin();i!=m.end();i++)
    	{
    		c+=abs(i->second);
    	}
    	cout<<c<<endl;
    }
	return 0;
}
