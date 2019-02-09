#include <iostream>
#include <set>
#include <vector>

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
  	
  	int size;
  	while(!g.empty() && !b.empty())
  	{
  		vector <int> k,l;
  		size=min(bat,(int)min(g.size(),b.size()));
  		for(int j=0;j<size;j++)
  		{
  		  auto p=g.end(),q=b.end();
  		  p--;
  		  q--;
  		  if(*p>*q)
  		  {
  			y=(*p)-(*q);
  			g.erase(p);	
  			b.erase(q);
  			k.push_back(y);
  		  }
  		  else
  		  {
  			if(*p<*q)
  			{
  			   y=(*q)-(*p);
  			   b.erase(q);
  			   g.erase(p);
  			   l.push_back(y);
  			}
  			else
  			{
  			    g.erase(p);
  			    b.erase(q);
  			}
  		  }
  		}
  		for(auto j=k.begin();j!=k.end();j++)
  		{
  			g.insert(*j);
  		}
  		for(auto j=l.begin();j!=l.end();j++)
  		{
  			b.insert(*j);
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
  			for(multiset<int>::reverse_iterator it=b.rbegin(); it!=b.rend(); it++)
  			{
		     cout << *it << '\n';
  			}
  		}
  		else
  		{
  			cout<<"green wins\n";
  			for(multiset<int>::reverse_iterator it=g.rbegin(); it!=g.rend(); it++)
  			{
		     cout << *it << '\n';
  			}
  		}
  	}
  	if(t>0)
  	{
  	 cout<<endl;
  	}
  }
	return 0;
}
