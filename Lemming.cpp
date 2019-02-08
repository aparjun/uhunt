#include <iostream>
#include <set>

using namespace std;

int main() 
{
  int t;
  cin>>t;
  while(t--)
  {
  	int bat,gr,bl,x,y;
  	cin>>bat>>gr>>bl;
  	multiset<int>g,b;
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
  			y=(*p)-(*q);
  			g.erase(p);	
  			b.erase(q);
  			g.insert(y);
  		}
  		else
  		{
  			if(*p<*q)
  			{
  			   y=(*q)-(*p);
  			   b.erase(q);
  			   g.erase(p);
  			   b.insert(y);
  			}
  			else
  			{
  			    g.erase(p);
  			    b.erase(q);
  			}
  		}
  	}
  	p=g.begin();
  	q=b.begin();
  	if(g.empty() && b.empty())
  	{
  		cout<<"green and blue died\n";
  	}
  	else
  	{
  		if(g.empty())
  		{
  			cout<<"blue wins\n";
  			while(q!=b.end())
  			{
  				cout<<*q<<"\n";
  				q++;
  			}
  		}
  		else
  		{
  			cout<<"green wins\n";
  			while(p!=g.end())
  			{
  				cout<<*p<<"\n";
  				p++;
  			}
  		}
  	}
  	cout<<endl;
  }
	return 0;
}
