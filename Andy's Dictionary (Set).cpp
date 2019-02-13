#include <iostream>
#include <set>
#include <string>

using namespace std;

int main() 
{
	set<string> s;
	string str,abc;
	while(cin>>str)
	{
		abc="";
		for(int i=0;i<=str.size();i++)
		{
			if(isalpha(str[i]))
			{
			 abc+=tolower(str[i]);
			}
			else
			{
				if(abc!="")
				{
				 s.insert(abc);
				 abc="";
				}
			}
		}
	}
	for(auto j=s.begin();j!=s.end();j++)
	{
		cout<<*j<<endl;
	}
	return 0;
}
