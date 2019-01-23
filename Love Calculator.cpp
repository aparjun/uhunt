#include <iostream>
using namespace std;

int dsum(int n) 
{ 
    int sum = 0; 
    while(n>0 || sum>9) 
    { 
        if(n==0) 
        { 
            n=sum; 
            sum=0; 
        } 
        sum+=n%10; 
        n/=10; 
    } 
    return sum; 
} 
int main() 
{
	string str,abc;
	
	while(getline(cin,str))
	{
		char ch;
		int a=0,b=0;
		float an,c=0,d=0;
		getline(cin,abc);
		for(int j=0;j<str.size();j++)
		{
			if(isalpha(str[j]))
			{
			 ch=tolower(str[j]);
			 a=a+(ch-'0')-48;
			}
		}
		for(int j=0;j<abc.size();j++)
		{
			if(isalpha(abc[j]))
			{
			 ch=tolower(abc[j]);
			 b=b+(ch-'0')-48;
			} 
		}
		c=dsum(a);
		d=dsum(b);
	  	if(c<d)
	  	{
	  		an=c/d;
	  		an=an*100;
	  	}
	  	else
	  	{
	  		an=d/c;
	  		an=an*100;
	  	}
		printf("%.2f",an);
		cout<<" %\n";
	}
	return 0;
}
