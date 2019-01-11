#include <iostream>
using namespace std;

int main() 
{
	int t,i=0;
	cin>>t;
	while(i<t)
	{
		int fl=0;
		string a,b,c,d="",e,f;
		
		cin>>a>>b>>c;
		if(c=="even")
		{
			d=d+a+b;
		}
		else
		{
			if(c=="up")
			{
			  for(int j=0;j<a.size();j++)
			  {
			  	for(int k=0;k<f.size();k++)
			  	{
			  		if(a[j]==f[k])
			  		{
			  			fl=1;
			  		}
			  	}
			  	if(fl==0)
			  	{
			  		f+=a[j];
			  	}
			  	fl=0;
			  }
			  for(int j=0;j<b.size();j++)
			  {
			  	for(int k=0;k<e.size();k++)
			  	{
			  		if(b[j]==e[k])
			  		{
			  			fl=1;
			  		}
			  	}
			  	if(fl==0)
			  	{
			  		e+=b[j];
			  	}
			  	fl=0;
			  }
			}
		}
		
	}
	return 0;
}
