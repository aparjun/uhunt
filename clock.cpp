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
		a=stod(str);
		b=str[3]-'0';
		b=b*10;
		c=str[4]-'0';
		b=b+c;
		b=b/60;
		a=a+b;
		a
		cout<<a<<"\n";
	 }
	 else
	 {
	   	a=str[2]-'0';
		cout<<a<<"\n";	
	 }
	} 
	return 0;
}
