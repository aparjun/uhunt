#include <iostream>
using namespace std;

int main() 
{
    int t,i=1;
    cin>>t;
    while(i<=t)
    {
    	string str,abc;
    	int a1,b1,c1,d,n,m=10000;
    	int a2,b2,c2,e;
    	int a,b;
    	cin>>n;
    	cin>>abc;
    	 b1=abc[3]-'0';	
	     c1=abc[4]-'0';
	     a1=stoi(abc);
		 b1=b1*10;
		 b1=b1+c1;
    	while(n--)
    	{
    	 d=0;	
    	 a=a1;
    	 b=b1;
		 cin>>str;
	     b2=str[3]-'0';	
	     c2=str[4]-'0';
	     a2=stoi(str);
		 b2=b2*10;
		 b2=b2+c2;
		 while(a2!=a || b2!=b)
		 {
		 	b++;
		 	if(b==60)
		 	{
		 		a++;
		 		b=0;
		 	}
		 	d++;
		 }
		 cin>>e;
		 d=d+e;
		 if(d<m)
		 {
		 	m=d;
		 }
    	}
    	cout<<"Case "<<i<<": ";
    	cout<<m<<endl;
    	i++;
    }
	return 0;
}
