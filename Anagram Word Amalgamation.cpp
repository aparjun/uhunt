#include <iostream>
#include <algorithm>

using namespace std;

int main() 
{
	int a=0;
	string str,s1[200],s2[200];
	while(cin>>str && str!="XXXXXX")
	{
		s1[a]=str;
	 	sort(str.begin(),str.end());
	 	s2[a]=str;
	 	a++;	
	}
	while(cin>>str && str!="XXXXXX")
	{
		int b=0;
		string s3[200];
	    sort(str.begin(),str.end());
	    for(int j=0;j<a;j++)
	    {
	   	  if(str==s2[j])
	  	  {
	  		 s3[j]=s1[j];
	  	  }
	    }	
	    for(int j=0;j<a-1;j++)
	    {
	     for(int k=j+1;k<a;k++)
	     {
		  if(s3[k]!="" && s3[j]!="" && s3[k]>s3[j])
		  {
			str=s3[j];
			s3[j]=s3[k];
			s3[k]=str;
	      }	
	     }
	    }
	    for(int j=100;j>=0;j--)
	    { 
	  	 if(s3[j]!="")
	  	 {
	  	   cout<<s3[j]<<"\n";
	  	   b++;
	  	 }
	    }
	    if(b==0)
	    {
	    	cout<<"NOT A VALID WORD\n";
	    }
	    cout<<"******\n";
	}
	return 0;
}
