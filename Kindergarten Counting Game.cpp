#include <iostream>
#include<bits/stdc++.h> 
using namespace std;

int main() 
{
	string str;
	while(getline(cin,str))
	{
		for(int i=0;i<str.size();i++)
		{
			if(!isalpha(str[i]))
			{
				str[i]=' ';
			}
		}
		string w;
		int f=0,c=0;
		stringstream ss(str);
		while(ss>>w)
		{
			for(int i=0;i<w.size();i++)
			{
				if(isalpha(w[i]))
				{
					f=1;
				}
			}
			if(f==1)
			{
				c++;
			}
			f=0;
		}
		cout<<c<<endl;
	}
	return 0;
}
