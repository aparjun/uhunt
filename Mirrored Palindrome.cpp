#include <iostream>
#include <string.h>
using namespace std;

int main() 
{
	char a[] = "A   3  HIL JM O   2TUVWXY5";
    char b[] = "01SE Z  8 ";
    char str[100];
    while(cin>>str)
    {
    	int flag1=0,flag2=0;
    	int l;
    	l=strlen(str);
    	for(int i=0,j=l-1;i<=j;i++,j--)
    	{
    		if(str[i]!=str[j])
    		{
    			flag1=1;
    		}
    		if(str[i]>='A' && str[i]<='Z')
    		{
    		 if(str[j]!=a[str[i]-'A'])
    		 {
    			flag2=1;
    		 }
    		}
    		else
    		{
    		 if(str[j]!=b[str[i]-'0'])
    		 {
    			flag2=1;
    		 }
    		} 
    	}
    	if(flag1==0 && flag2==0)
    	{
    		cout<<str;
    		cout<<" -- is a mirrored palindrome.";
    		cout<<"\n\n";
    	}
    	if(flag1==0 && flag2!=0)
    	{
    		cout<<str;
    		cout<<" -- is a regular palindrome.";
    		cout<<"\n\n";
    	}
    	if(flag1!=0 && flag2==0)
    	{
    		cout<<str;
    		cout<<" -- is a mirrored string.";
    		cout<<"\n\n";
    	}
    	if(flag1!=0 && flag2!=0)
    	{
    		cout<<str;
    		cout<<" -- is not a palindrome.";
    		cout<<"\n\n";
    	}
    }
	return 0;
}
