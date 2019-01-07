#include <iostream>
#include <string.h>
#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int t,i=0;
	string str;
	cin>>t;
	while(i<t)
    {
    	int n=0;
    	getline(cin,str);
    	string s1[100],s2[100];
    	string abc="";
    	while(getline(cin,str))
    	{
    	 string abc="";
    	 for(int j=0;j<str.size();j++)
		 {
		  if(isalpha(str[j]))
		  {
		 	abc+=tolower(str[j]);
		  } 
		 }
		 s1[n]=abc;
		 sort(abc.begin(),abc.end());
		 s2[n]=abc;
		 n++;
    	}
	
	  for(int j=0;j<i;j++)
	  {
	   for(int k=j+1;k<=i;k++)
	   {
		if(s2[j]==s2[k])
		{
			cout<<s1[j]<<" = "<<s1[k]<<"\n";
		}
	   }	
	  }
	  
	  i++;
	}  
	return 0;
}

