#include <iostream>
#include <string.h>
#include <bits/stdc++.h>
using namespace std;

bool compare(char a, char b)
{
	if(tolower(a) == tolower(b))
	{
		if(a<b)
		{
			return true;
		}
	}
	if(tolower(a) < tolower(b))
	{
	 return true;
	} 
	return false;
}
int main() 
{
	int t,i=0;
	cin>>t;
	string str;
	while(i<t)
	{
		cin>>str;
		sort(str.begin(),str.end(),compare);
		do{
		cout<<str<<"\n";
		}while(next_permutation(str.begin(),str.end(),compare));
		
		i++;
	}
	return 0;
}
