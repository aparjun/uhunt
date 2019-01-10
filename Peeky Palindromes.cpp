#include <iostream>
#include <string.h>

using namespace std;

bool palindrome(string abc)
{
	int f=0;
	for(int i=0,j=abc.size()-1;i<=j;i++,j--)
	{
		if(abc[i]!=abc[j])
		{
			f=1;
		}
	}
	if(f==1)
	{
		return false;
	}
	else
	{
		return true;
	}
}
int main() 
{
	string s;
	while(cin>>s)
	{
		int a=0;
		string str[10000];
		int n=1;
		for(int i=0; i<s.length(); i++) 
		{
         for(int j=0; j<s.length()-i; j++)
         {
            string s1(s,i,j+1);
            if(palindrome(s1))
            {
            	str[a]=s1;
            	a++;
            }
         }
		} 
		int f=0;
	    for(int i=0; i<a-1; i++) 
		{
         for(int j=i+1; j<a; j++)
         {
           if(str[i]==str[j])
           {
           	f=1;
           }
         }
         if(f==0)
         {
         	n++;
         }
         f=0;
		} 
		cout<<"The string '"<<s<<"' contains "<<n<<" palindromes."<<"\n";
	}
	return 0;
}
