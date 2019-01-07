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
    	int n=0,m=0;
    	string s1[100],s2[100];
    	string abc="";
    	while(getline(cin,str))
    	{
    	 if(str=="")
    	 {
    	 	break;
    	 }
    	 s1[n]=str;	
    	 string abc="";
    	 for(int j=0;j<str.size();j++)
		 {
		  if(str[j]!=' ')
		  {
		 	abc+=tolower(str[j]);
		  } 
		 }
		 sort(abc.begin(),abc.end());
		 s2[n]=abc;
		 n++;
    	}
    	string s3[100];
	    for(int j=0;j<n-1;j++)
	    {
	     for(int k=j+1;k<n;k++)
	     {
		  if(s2[j]!="" && s2[j]==s2[k])
		  {
		  	if(s1[j]>s1[k])
		  	{
			 s3[m]+=s1[k];
			 s3[m]+=" = ";
			 s3[m]+=s1[j];
			 m++;
		  	}
		  	else
		  	{
		  	 s3[m]+=s1[j];
			 s3[m]+=" = ";
			 s3[m]+=s1[k];
			 m++;
		  	}
		  }
	     }	
	    }
	    for(int j=0;j<m;j++)
	    {
	    	cout<<s3[j]<<"\n";
	    }
	    i++;
	}  
	return 0;
}
