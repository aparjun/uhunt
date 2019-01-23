#include <iostream>
using namespace std;

int main()
{
	int t,i=0;
	cin>>t;
	while(i<t)
	{
		string str;
        double a=0,b=0,c=0,d=0;	 
	    cin>>str;
	    b=str[3]-'0';	
	    c=str[4]-'0';
		a=stod(str);
		b=b*10;
		b=b+c;
		d=b;
		if(b!=0)
		{
		 d=60-b;
		} 
		b=b/60;
		a=a+b;
		a=(a*360)/12;
		if(a!=360)
		{
			if(a>360)
			{
			  a=a-360;
			  a=360-a;
			}
			else
			{
			  a=360-a;	
			}
		} 
		a=a/30;
		if((int)a==0)
		{
			a=12;
		}
		if(a<10)
		{
			cout<<"0";
		}
		cout<<(int)a<<":";
		if(d<10)
		{
			cout<<"0";
		}
		cout<<d<<"\n";
	i++;	
	}
	return 0;
}
