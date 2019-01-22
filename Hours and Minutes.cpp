#include <iostream>
using namespace std;

int main() 
{
	int n;
	while(cin>>n)
	{
	 int h=0,m=0,f=0,d=0;	
	 while(h<360)
	 {
	  	m=m+6;
	  	if(m%12==0)
	  	{
	  		h=h+6;
	  	}
	  	if(m==60)
	  	{
	  		m=0;
	  	}
	  	d=m-h;
	  	if(d<0)
	  	{
	  		d=d*(-1);
	  	}
	  	if(n==d)
	  	{
	  		f++;
	  	}
	 }
	 if(f==0)
	 {
	 	cout<<"N\n";
	 }
	 else
	 {
	 	cout<<"Y\n";
	 }
	}
	return 0;
}
