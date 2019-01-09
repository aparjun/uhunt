#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() 
{
	int r;
	while(cin>>r)
	{
		if(r==-1)
		{
			break;
		}
		int a=0,b=0,c=0,d=0;
		string str,cba,abc="";
		cin>>str;
		cin>>cba;
		abc+=cba[0];
		for(int k=1;k<cba.size();k++)
		{
			for(int l=0;l<abc.size();l++)
			{
			 if(cba[k]==abc[l])
			 {
			 	d++;
			 }
			}
			if(d==0)
			 {
			 	abc+=cba[k];
			 }
			 d=0;
		}
		cout<<"Round "<<r<<"\n";
		for(int j=0;j<abc.size();j++)
		{
			for(int k=0;k<str.size();k++)
			{
				if(abc[j]==str[k])
				{
					a++;
					c++;
				}
			}
			if(a==str.size())
				{
					cout<<"You win.\n";
					break;
				}
			if(c==0)
			{
				b++;
			}
			if(b==7)
			{
				cout<<"You lose.\n";
				break;
			}
			c=0;
		}
		if(b!=7 && a!=str.size())
		{
		 cout<<"You chickened out.\n";	
		}
	}
	
	
	
	return 0;
}
