#include <iostream>
#include <string.h>
#include <algorithm>
using namespace std;

int main()
{
	int t,i=0;
	cin>>t;
	while(i<t)
	{
		int n=0,f=0;
		long long int a,b,c;
		string abc,cba;
		cin>>abc;
		cba=abc;
		while(1)
		{
		 n++;	 
		 abc=cba;
		 reverse(cba.begin(),cba.end());
		 a=stoi(abc);
		 b=stoi(cba);
		 c=a+b;
		 cba=to_string(c);
		 for(int j=0,k=cba.size()-1;j<=k;j++,k--)
		 {
		 	if(cba[j]!=cba[k])
		 	{
		 		f=1;
		 	}
		 }
		 if(f==0)
		 {
		 	cout<<n<<" "<<cba<<"\n";
		 	break;
		 }
		 else
		 {
		 	f=0;
		 }
		}
		i++;
	}
	return 0;
}
