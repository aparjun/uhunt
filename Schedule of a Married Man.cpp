#include <iostream>
using namespace std;

int main() 
{
	int t,i=1;
	cin>>t;
	while(i<=t)
	{
		string a,b,c,d;
		cin>>a>>b>>c>>d;
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
	}
	return 0;
}
