#include <iostream>
using namespace std;

int main() 
{
  int t;
  cin>>t;
  while(t--)
  {
  	int bat,gr,bl,x,y;
  	cin>>bat>>gr>>bl;
  	set<int>g,b;
  	for(int j=0;j<gr;j++)
  	{
  		cin>>x;
  		g.insert(x);
  	}
  	for(int j=0;j<bl;j++)
  	{
  		cin>>x;
  		b.insert(x);
  	}
  	auto p=g.begin(),q=b.begin();
  	while(!g.empty() && !b.empty())
  	{
  		p=g.begin();
  		q=b.begin();
  		if(*p>*q)
  		{
  			*p=*p-*q;
  			b.erase(q);
  		}
  		else
  		{
  			if(*p<*q)
  			{
  			   *q=*q-*p;
  			    g.erase(p);	
  			}
  			else
  			{
  			    g.erase(p);
  			    b.erase(q);
  			}
  		}
  	}
  	if(g.empty() && b.empty())
  	{
  		cout<<"green and blue died\n";
  	}
  	else
  	{
  		if(g.empty())
  		{
  			cout<<"blue wins\n";
  			while(p!=g.end())
  			{
  				cout<<*p<<"\n";
  				p++;
  			}
  		}
  	}
  }
	return 0;
}
