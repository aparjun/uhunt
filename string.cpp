#include <iostream>
#include <string.h>
#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int i=0;
	string s1[1000],s2[1000];
	string str;
	while(cin>>str)
	{
		if(str=="#")
		{
			break;
		}
		s1[i]=str;
		for(int j=0;j<str.size();j++)
		{
		 	str[j]=tolower(str[j]);
		}
		sort(str.begin(),str.end());
		s2[i]=str;
		i++;
	}
	for()
	return 0;
}
