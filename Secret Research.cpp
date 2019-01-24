#include <iostream>
using namespace std;

int main() 
{
	int t,i=0;
	string s;
	cin>>t;
	while(i<t)
	{
		cin>>s;
		int len=s.size();
		if(s=="1" || s=="4" || s=="78")
		{
			printf("+\n");
		}	
		else if (s[len-1] == '5' && s[len - 2] == '3')
		{
			printf("-\n");
		}	
		else if (s[0] == '9' && s[len - 1] == '4')
		{
			printf("*\n");
		}	
		else if (s[0] == '1' && s[1] == '9' && s[2] == '0')
		{
			printf("?\n");
		}	
		else
		{
			printf("+\n");
		}	
		i++;
	}
	return 0;
}
