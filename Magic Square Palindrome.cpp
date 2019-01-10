#include <iostream>
#include <string.h>
#include <cmath>
using namespace std;

int main() 
{
	string s;
	int t,i=1;
	cin>>t;
	getline(cin,s);
	while(i<=t)
	{
	  double n=0,a=0,b=0;	
	  string str,tmp,abc="";	
	  getline(cin,str);	 
	  for(int j=0;j<str.size();j++)
	  {
	  	if(isalpha(str[j]))
	  	{
	     abc+=str[j];
	     a++;
	  	}
	  }
	  n=sqrt(a);
	  b=n-(int)sqrt(a);
	  if(b!=0 || a==0 && i>0)
	  {
	  	if(a==0)
	  	{
	  	 cout<<"Case #";
	  	 cout<<i<<":\n";
	  	 cout<<a<<"\n";
	  	}
	  	else
	  	{
	  	 cout<<"Case #";
	  	 cout<<i<<":\n";
	  	 cout<<"No magic :("<<"\n";
	  	}
	  }
	  else
	  {
	  	int s=(int)sqrt(a);
	  	char a1[s][s];
	  	for(int j=0;j<s;j++)
	  	{
	  		for(int k=0;k<s;k++)
	  		{
	  			a1[j][k]=abc[a-1];
	  			a--;
	  		}
	  	}
	    for(int j=0;j<s;j++)
	  	{
	  		for(int k=0;k<s;k++)
	  		{
	  			tmp+=a1[k][j];
	  		}
	  	}
	  	if(tmp!=abc)
	  	{
	  	 cout<<"Case #";
	  	 cout<<i<<":\n";
	  	 cout<<"No magic :("<<"\n";	
	  	}
	  	else
	  	{
	  	  tmp="";	
	  	  for(int j=s-1;j>=0;j--)
	  	  {
	  		for(int k=s-1;k>=0;k--)
	  		{
	  			tmp+=a1[j][k];
	  		}
	  	  }	
	  	  if(tmp!=abc)
	  	  {
	  	  	cout<<"Case #";
	  	    cout<<i<<":\n";
	  	    cout<<"No magic :("<<"\n";
	  	  }
	  	  else
	  	  {
	  	   tmp="";
	  	   for(int j=s-1;j>=0;j--)
	  	   {
	  		for(int k=s-1;k>=0;k--)
	  		{
	  			tmp+=a1[k][j];
	  		}
	  	   }		
	  	   if(tmp!=abc)
	  	   {
	  	   	cout<<"Case #";
	  	    cout<<i<<":\n";
	  	    cout<<"No magic :("<<"\n";
	  	   }
	  	   else
	  	   {
	  	   	cout<<"Case #";
	  	    cout<<i<<":\n";
	  	    cout<<s<<"\n";
	  	   }
	  	  }
	  	}
	  }
	  i++;
	}
	return 0;
}
