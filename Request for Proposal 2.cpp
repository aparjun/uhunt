#include <iostream>
#include <ctype.h>
#include <algorithm>
#include <string.h>
using namespace std;

int main() 
{
	int r,p,n=0;
	char str[80],in[80],temp[80];
	while(cin>>r)
	{
	 cin>>p;
	 if(r==0)
	 {
	 	break;
	 }
     int b,c=0,m=0;
     double a,d=0;
     while(cin>>str && m<p)
     {
     	if(isalpha(str[1]))
     	{
     		strcpy(in,str);
     	}
     	else
     	{
     		m++;
     		a=stod(str);
     		cin>>b;
     	}
     	if(c<=b)
	    {
	    	if(c<b)
	    	{
	    	 c=b;
	    	 d=a;
	    	 strcpy(temp,in);
	    	}
	    	else
	    	{
	    		if(a<d)
	    		{
	    			strcpy(temp,in);
	    		}
	    	}
	    }
     }
	 n++;
	 printf("RFP #");
	 printf("%d",n);
	 printf("\n");
	 cout<<temp;
	 printf("\n\n");
	}
	return 0;
}
