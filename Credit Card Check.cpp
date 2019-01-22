#include <iostream>
using namespace std;

int main()
{
	string str;
	int t,i=0;
	cin>>t;
	getline(cin,str);
	while(i<t)
	{
	  int ar[16];
	  int a=0,b=0,c=0,d=0;
	  getline(cin,str);
	  for(int j=0;j<str.size();j++)
	  {
	  	if(isdigit(str[j]))
	  	{
	  		ar[a]=str[j]-'0';
	  		a++;
	  	}
	  }
	  for(int j=0;j<16;j++)
	  {
	  	if(j%2!=0)
	  	{
	  	 c=c+ar[j];	
	  	}
	  	else
	  	{
	  		ar[j]=ar[j]*2;
	  		while(ar[j]>0)
	  		{
	  			b=b+ar[j]%10;
	  			ar[j]=ar[j]/10;
	  		}
	  	}
	  }
	  d=b+c;
	  if(d%10==0)
	  {
	  	cout<<"Valid\n";
	  }
	  else
	  {
	  	cout<<"Invalid\n";
	  }
	  i++;
	}
	return 0;
}
