#include <iostream>
using namespace std;

int main() 
{
	int c=0;
	string str;
	while(getline(cin,str))
	{
		for(int j=0;j<str.size();j++)
		{
			if(str[j]=='"')
			{
				if(c%2==0)
				{
				 cout<<"``";
				}
				else
				{
				 cout<<"''";
				}
				c++;
			}
			else
			{
				cout<<str[j];
			}
		}
		cout<<"\n";
	}
	return 0;
}
