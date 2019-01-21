#include <iostream>
using namespace std;

int main() 
{
	string str;
	int p=1;
	while(cin>>str)
	{
	 cout<<"Case "<<p<<":"<<"\n";
	 p++;
	 int t,a,b,c,f=0;
	 cin>>t;
	 for(int i=0;i<t;i++)
	 {
	 	cin>>b>>c;
	 	if(c<b)
	 	{
	 		a=c;
	 	}
	 	else
	 	{
	 		a=b;
	 		b=c;
	 	}
	 	while(a<=b)
	 	{
	 		if(str[a]!=str[b])
	 		{
	 			f++;
	 		}
	 		a++;
	 	}
	 	if(f==0)
	 	{
	 		cout<<"Yes\n";
	 	}
	 	else
	 	{
	 		cout<<"No\n";
	 	}
	 	f=0;
	 }
	} 
	return 0;
}
