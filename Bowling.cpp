#include <iostream>
#include <numeric> 
using namespace std;

int main() 
{
	string str;
	while(getline(cin,str))
	{
		int ar[20]={0};
		int a=0,n=0;
		if(str=="Game Over")
		{
			break;
		}
		for(int j=0;j<str.size();j++)
		{
		 if(str[j]!=' ')
		 {
		 	if(str[j]=='/')
		 	{
		 	 ar[a]=-1;
		 	 a++;
		 	}
		 	else
		 	{
		 	  if(str[j]=='X')
		 	  {
		 	   ar[a]=-2;
		 	   a++;
		 	  }
		 	  else
		 	  {
		 	   ar[a]=str[j]-'0';
		 	   a++;
		 	  }
		 	} 
		 }
		}
		for(int j=a-1;j>=0;j--)
		{
		 if(ar[j]==-1)
		 {
		 	ar[j]=10+ar[j+1];
		 	n=n+ar[j];
		 }
		 if(ar[j]==-2)
		 {
		  	ar[j]=10+ar[j+1]+ar[j+2];
		 	n=n+ar[j];	
		 }
		 else
		 {
		 	n=n+ar[j];
		 }
	    }
	    cout<<n;
		cout<<"\n";	
	}
	return 0;
}
