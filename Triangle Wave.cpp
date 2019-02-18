#include <iostream>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	string s[100]={"1","22","333","4444","55555","666666","7777777","88888888","999999999"};
	while(t--)
	{
		int a,b;
		cin>>a>>b;
		while(b--)
		{
			for(int i=0;i<a;i++)
			{
				cout<<s[i]<<endl;
			}
			for(int i=a-2;i>=0;i--)
			{
				cout<<s[i]<<endl;
			}
			if(b>0)
			{
				cout<<endl;
			}
		}
		if(t>0)
		{
		 cout<<endl;
		}
	}
	return 0;
}
