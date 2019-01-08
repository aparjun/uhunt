#include <iostream>
using namespace std;

int main() 
{
	int r,n=0;
	while(cin>>r)
	{
		if(r==-1)
		{
			break;
		}
		n++;
		int a=0,b=0,c=0;
		string str,abc;
		cin>>str;
		cin>>abc;
		cout<<"Round "<<n<<"\n";
		for(int j=0;j<abc.size();j++)
		{
			for(int k=0;k<str.size();k++)
			{
				if(abc[j]==str[k])
				{
					str[k]='0';
					a++;
					c++;
				}
				if(a==str.size())
				{
					cout<<"You win.\n";
					break;
				}
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
