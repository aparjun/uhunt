#include <iostream>
using namespace std;

int main() 
{
	string str;
	cin>>str;
	//getting one input due to presentation error
	int a=0,b=0,c=0,d=0,e=0,f=0,h=0;
		a=str[str.size()-1]-'0';
		b=str[str.size()-2]-'0';
		c=str[str.size()-3]-'0';
		d=str[str.size()-4]-'0';
		b=b*10;
		c=c*100;
		d=d*1000;
		c=a+b+c+d;
		a=a+b;
		
		int flag=0,g=0;
		if(a%4==0 && ((a%25==0 && c%16==0) || a!=0))
  		{
  		 cout<<"This is leap year.\n";
  		 for(int j=0;j<str.size();j++)
  		 {
  		 	if(j%2==0)
  		 	{
  		 		e=e+(str[j]-'0');
  		 	}
  		 	else
  		 	{
  		 		e=e-(str[j]-'0');
  		 	}
  		 }
  		 if(e%11==0 && (str[str.size()-1]=='0' || str[str.size()-1]=='5'))
  		 {
  		 	g++;
  		 }
  		 flag++;
  		}
  		for(int j=0;j<str.size();j++)
  		 {
  		 		h=h+(str[j]-'0');
  		 }
  		if(h%3==0 && (str[str.size()-1]=='0' || str[str.size()-1]=='5'))
  		{
  			cout<<"This is huluculu festival year.\n";
  			flag++;
  		}
  		if(g!=0)
  		{
  			cout<<"This is bulukulu festival year.\n";
  		}
        if(flag==0)
        {
        	cout<<"This is an ordinary year.\n";
        }
	while(cin>>str)
	{
		cout<<"\n";
	    a=0,b=0,c=0,d=0,e=0,f=0,h=0;
		a=str[str.size()-1]-'0';
		b=str[str.size()-2]-'0';
		c=str[str.size()-3]-'0';
		d=str[str.size()-4]-'0';
		b=b*10;
		c=c*100;
		d=d*1000;
		c=a+b+c+d;
		a=a+b;
		
		flag=0,g=0;
		if(a%4==0 && ((a%25==0 && c%16==0) || a!=0))
  		{
  		 cout<<"This is leap year.\n";
  		 for(int j=0;j<str.size();j++)
  		 {
  		 	if(j%2==0)
  		 	{
  		 		e=e+(str[j]-'0');
  		 	}
  		 	else
  		 	{
  		 		e=e-(str[j]-'0');
  		 	}
  		 }
  		 if(e%11==0 && (str[str.size()-1]=='0' || str[str.size()-1]=='5'))
  		 {
  		 	g++;
  		 }
  		 flag++;
  		}
  		for(int j=0;j<str.size();j++)
  		 {
  		 		h=h+(str[j]-'0');
  		 }
  		if(h%3==0 && (str[str.size()-1]=='0' || str[str.size()-1]=='5'))
  		{
  			cout<<"This is huluculu festival year.\n";
  			flag++;
  		}
  		if(g!=0)
  		{
  			cout<<"This is bulukulu festival year.\n";
  		}
        if(flag==0)
        {
        	cout<<"This is an ordinary year.\n";
        }
	}
	return 0;
}
