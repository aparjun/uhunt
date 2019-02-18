#include <iostream>
#include <string>
using namespace std;

int main() 
{
	string str;
	while(cin>>str && str!=".")
	{
		int r,s=str.size();
		for(int i=1;i<=s;i++)
		{
			string sub = str.substr(0, i);
			string abc="";
			r=sub.size();
			for(int j=0;j<s/r;j++)
			{
				abc=abc+sub;
			}
			if(abc==str)
			{
				cout<<s/r<<endl;
				break;
			}
		}
	}
	return 0;
}
