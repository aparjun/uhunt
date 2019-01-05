#include <iostream>
#include <cstdio>
#include <string>
#include <cctype>
#include <algorithm>
using namespace std;

int main() 
{
	string str;
	while(getline(cin,str))
	{
		if(str=="DONE")
		{
			break;
		}
		string abc="",cba;
		for(int j=0;j<str.size();j++)
		{
		 if(isalpha(str[j]))
		 {
		 	abc+=tolower(str[j]);
		 }
		}
		cba=abc;
		reverse(abc.begin(), abc.end());
		if(abc==cba)
		{
			printf("You won’t be eaten!");
			printf("\n");
		}
		else
		{
			printf("Uh oh..");
			printf("\n");
		}
	}
	return 0;
}
