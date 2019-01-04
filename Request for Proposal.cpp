#include <iostream>
#include <algorithm>
using namespace std;

int main() 
{
	int r,p,n=0;
	string str,in,temp;
	while(cin>>r)
	{
	 cin>>p;
	 if(r==0)
	 {
	 	break;
	 }
     int b,c=0;
     double a,d;
	 for(int j=0;j<=r;j++)
	 {
		getline(cin,str);
	 }
	 for(int j=0;j<p;j++)
	 {
		getline(cin,in);
        cin>>a;
        cin>>b;
	    for(int i=0;i<=b;i++)
	    {
		 getline(cin,str);
	    }
	    if(c<=b)
	    {
	    	if(c<b)
	    	{
	    	 c=b;
	    	 d=a;
	    	 temp=in;
	    	}
	    	else
	    	{
	    		if(a<d)
	    		{
	    			temp=in;
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
