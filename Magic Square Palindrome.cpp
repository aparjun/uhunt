#include <iostream>
#include <string.h>
#include <cmath>
using namespace std;

int main() 
{
	int t,i=0;
	cin>>t;
	while(i<=t)
	{
	  int f=0;	
	  double n=0,a=0,b=0;	
	  string str,abc;	
	  getline(cin,str);	 
	  for(int j=0;j<str.size();j++)
	  {
	  	if(isalpha(str[j]))
	  	{
	     abc+=tolower(str[j]);
	     a++;
	  	}
	  }
	  n=sqrt(a);
	  b=n-(int)sqrt(a);
	  if(b!=0 || a==0 && i>0)
	  {
	  	cout<<"Case #";
	  	cout<<i<<":\n";
	  	cout<<"No magic :("<<"\n";
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
	  	for(int p=0;p<s/2;p++)
	  	{
	  	  for(int k=s-1;k>=p;k--)
	  	  {
	       if(a1[p][k]!=a1[k][p])
	       {
	       	f=1;
	       }
	  	  }	
	    }
	    for(int p=s-1;p>=s/2;p--)
	  	{
	  	  for(int k=s-1;k>=p;k--)
	  	  {
	       if(a1[p][k]!=a1[k][p])
	       {
	       	f=1;
	       }
	  	  }	
	    }
	    if(i>0)
	    {
	     if(f==0)
	     {
	     cout<<"Case #";
	  	 cout<<i<<":\n";
	  	 cout<<s<<"\n";	
	     }
	     else
	     {
	     cout<<"Case #";
	  	 cout<<i<<":\n";
	  	 cout<<"No magic :("<<"\n";	
	     }
	    } 
	  }
	  i++;
	}
	return 0;
}
