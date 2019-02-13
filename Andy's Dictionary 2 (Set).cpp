#include <iostream>
#include <set>
#include <string>

using namespace std;

int main() 
{
	set<string> s;
	string str,abc="";
	while(cin>>str)
	{
		for(int i=0;i<=str.size();i++)
		{
			if(i==str.size())
			{
					 s.insert(abc);
					 abc="";
					 break;
			}
			if(isalpha(str[i]))
			{
			 abc+=tolower(str[i]);
			}
			else
			{
				if(str[i]=='-' && i==str.size()-1)
				{
				 break;
				}
				else 
				{
				  if(str[i]=='-' && i!=str.size()-1)
				  {
				   abc+=str[i];
				  }
				  else
				  {
				  	s.insert(abc);
					 abc="";
					 
				  }
				}
			}
			
		}
	}
	for(auto j=++s.begin();j!=s.end();j++)
	{
		cout<<*j<<endl;
	}
	return 0;
}
