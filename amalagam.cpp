#include <iostream>
#include <algorithm>

using namespace std;

int main() 
{
	int i=0,a=0;
	string str;
	while(cin>>str)
	{
	 string abc,s3[200];	
	 if(i>0)
	 {
	  abc=str;
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
	  for(int j=0;j<200;j++)
	  {
	  	if(s3[j]!="")
	  	{
	  		cout<<s3[j]<<"\n";
	  	}
	  }
	 }	
	 if(str=="XXXXXX")
	 {
	 	i++;
	 }
	 else
	 {
	 	s1[a]=str;
	 	sort(str.begin(),str.end());
	 	s2[a]=str;
	 	a++;
	 }
	}
	return 0;
}
