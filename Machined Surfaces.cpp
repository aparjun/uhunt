#include <iostream>
using namespace std;

int main() 
{
	int t;
	string str;
	while(cin>>t && t!=0)
	{
		int ar[20]={0},m=100,c=0,j=0,s=0;
		getline(cin,str);
		while(j<t)
		{
		 getline(cin,str);
		 for(int i=0;i<str.size();i++)
		 {
		 	if(str[i]==' ')
		 	{
		 		c++;
		 	}
		 }
		 ar[j]=c;
		 if(m>c)
		 {
		 	m=c;
		 }
		 c=0;
		 j++;
		}
		for(int i=0;i<t;i++)
		{
		 s=s+ar[i]-m;
		}
		cout<<s<<endl;
	}
	return 0;
}
