#include <iostream>
#include <string.h>
using namespace std;

int main()
{
	string str;
	while(1)
	{
	    double a=0,b=0,c=0;	 
	    cin>>str;
	    if(str.size()==4 && str[0]=='0' && str[2]=='0' && str[3]=='0')
	    {
	 	   break;
	    }
	    if(str.size()==5)
	    { 
	     b=str[3]-'0';	
	     c=str[4]-'0';
	    }
	    else
	    {
	     b=str[2]-'0';	
	     c=str[3]-'0';
	    }  
		a=stod(str);
		b=b*10;
		b=b+c;
		b=b/60;
		a=a+b;
		a=(a*360)/12;
		b=(b*360);
		if(a>b)
		{
		 c=a-b;
		}
		else
		{
		 c=b-a;
		}
		if(c<=180)
		{
		 printf("%.3lf",c);
		 printf("\n");
		}
		else
		{
		 printf("%.3lf",360-c);
		 printf("\n");
		}
	} 
	return 0;
}
