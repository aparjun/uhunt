#include <iostream>
#include <string.h>
#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int t,i=0;
	cin>>t;
	string str;
	while(i<t)
	{
		string s[10000];
		int n=0;
		cin>>str;
		sort(str.begin(),str.end());
		do{
		s[n]=str;
		n++;
		}while(next_permutation(str.begin(),str.end()));
		for(int j=0;j<n;j++)
	    {
	       for(int k=0;k<n;k++)
	       {
		    if(j!=k && s[j]==s[k])
		    {
			  s[j]="123";
			  s[k]="123";
		    }
	       }	
	    }
	    for(int j=0;j<n-1;j++)
	    {
	      for(int k=j+1;k<=n-1;k++)
	      {
		   if(s[k]>s[j])
		   {
			str=s[j];
			s[j]=s[k];
			s[k]=str;
		   } 
	      }	
	    }
	    for(int j=n-1;j>=0;j--)
	    {
		 if(isalpha(s[j][0]))
		 {
		  cout<<s[j]<<"\n";
		 } 
	    }
		i++;
	}
	return 0;
}
