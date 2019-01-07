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
	for(int j=0;j<=i;j++)
	{
	  for(int k=0;k<=i;k++)
	  {
		if(j!=k && s2[j]==s2[k])
		{
			s1[j]="123";
			s1[k]="123";
		}
	  }	
	}
	for(int j=0;j<=i;j++)
	{
		cout<<s1[j]<<"\n";
	}
	return 0;
}
