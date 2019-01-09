#include <iostream>
#include <string.h>

using namespace std;

int main()
{
	while(1)
	{
		string str;
		int t,p,m,n;
		cin>>t;
		if(t<0)
		{
			break;
		}
		double a,b,c,d,a1[t+1],a2[t+1]={0};
		cin>>d;
		cin>>a;
		cin>>p;
		b=a/t;
		d=d+a;
		for(int i=0;i<p;i++)
		{
		 cin>>m;
		 cin>>str;
		 a2[m]=stod(str);
		}
		c=a2[0];
		for(int i=0;i<=t;i++)
		{
		 a1[i]=a;
		 a=a-b;
		 if(a2[i]==0)
		 {
		 	a2[i]=c;
		 	d=d*(1-a2[i]);
		 	a2[i]=d;
		 }
		 else
		 {
		 	c=a2[i];
		 	d=d*(1-a2[i]);
		 	a2[i]=d;
		 }
		}
		for(int i=0;i<=t;i++)
		{
		 if(a1[i]<a2[i])
		 {
		 	if(i==1)
		 	{
		 	 cout<<"1 month\n";
		 	}
		 	else
		 	{
		 	 cout<<i<<" months\n";
		 	}
		 	break;
		 }
		}
	}
	return 0;
}
