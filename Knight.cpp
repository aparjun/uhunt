#include <iostream>
using namespace std;

int main()
{
	while(1)
	{
	   int r,c,n;
	   cin>>r;
	   cin>>c;
	   if(r==0 && c==0)
	   {
	   	break;
	   }
	   n=r*c;
	   if(n==2 || n==6)
	   {
	    n=n+1;
	   } 
	   if(n==4)
	   {
	   	n=n+4;
	   }
	   if(n%2!=0)
	   {
	   	n=n+1;
	   }
	   n=n/2;
	   cout<<n<<" knights may be placed on a "<<r<<" row "<<c<<" column board.\n";
	}   
	return 0;
}
