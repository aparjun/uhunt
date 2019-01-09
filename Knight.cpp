#include <iostream>
#include<algorithm> 
using namespace std;

int main()
{
	while(1)
	{
	   int r,c,m,n;
	   cin>>r;
	   cin>>c;
	   if(r==0 && c==0)
	   {
	   	break;
	   }
	   m=max(r,c);
	   if(r<3 || c<3)
	   {
	   	if(r==1 || c==1)
	   	{
	   		n=m;
	   	}
	   	else
	   	{
	   		if(m%2==0)
	   		{
	   			if(m%4!=0)
	   			{
	   				n=m+2;
	   			}
	   			else
	   			{
	   				n=m;
	   			}
	   		}
	   		else
	   		{
	   			n=m+1;
	   		}
	   	}
	   }
	   else
	   {
	   	 n=r*c;
	     if(n%2!=0)
	     {
	   	  n=n+1;
	     }
	     n=n/2;
	   }
	  
	   cout<<n<<" knights may be placed on a "<<r<<" row "<<c<<" column board.\n";
	}   
	return 0;
}
