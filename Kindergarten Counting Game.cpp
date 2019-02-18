#include <iostream>
using namespace std;

int main() 
{
	string str;
	while(getline(cin,str))
	{
		int f=0,c=0;
		for(int i=0;i<str.size();i++)
		{
			if(isalpha(str[i]))
			{
				f=1;
			}
			if(str[i]==' ' && f==0)
			{
				c++;
				
			}
		}
	}
	return 0;
}
