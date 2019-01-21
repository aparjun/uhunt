#include <iostream>
using namespace std;

int main()
{
	int t,i=0;
	cin>>t;
	string str;
	getline(cin,str);
	while(i<t)
	{
		int a=0,b=0;
		string abc="";
		getline(cin,str);
		for(int j=0;j<str.size();j++)
		{
			if(str[j]!=' ')
			{
				abc+=str[j];
			}
		}
		for(int j=0;j<abc.size();j++)
		{
			if(abc[j]=='M')
			{
				a++;
			}
			else
			{
				b++;
			}
		}
		if(a==b && a>1)
		{
			cout<<"LOOP\n";
		}
		else
		{
			cout<<"NO LOOP\n";
		}
		i++;
	}
	return 0;
}
