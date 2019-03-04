#include <iostream>
#include <set>
using namespace std;

int main() 
{
	set<int>s;
	for(int i=1;i<=3;i++)
	{
		for(int j=1;j<=20;j++)
		{
			s.insert(i*j);
		}
	}
	int n;
	while(cin>>n)
	{
		int p=0,c=0;
		for(auto i=s.begin();i!=s.end();i++)
		{
			for(auto j=s.begin();j!=s.end();j++)
		    {
			    for(auto k=s.begin();k!=s.end();k++)
		        {
			       if(*i+*j+*k==n)
			       {
			       	p++;
			       	if(i<=j&&j<=k)
			       	{
			       		c++;
			       	}
			       }
		        } 
		    }
		}
		if(p==0)
		{
			cout<<"THE SCORE OF "<<n<<" CANNOT BE MADE WITH THREE DARTS.\n";
		}
		else
		{
			cout<<"NUMBER OF COMBINATIONS THAT SCORES "<<n<<" IS"<<c<<"\n";
			cout<<"NUMBER OF PERMUTATIONS THAT SCORES "<<n<<" IS"<<p<<"\n";
		}
		cout<<"**********************************************************************\n";
	}
	cout<<"END OF OUTPUT\n";
	return 0;
}
