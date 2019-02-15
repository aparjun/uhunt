#include <iostream>
#include <map>
using namespace std;

int main()
{
	int t,i=0;
	map<char,int>m;
	cin>>t;
	while(i<t)
	{ 
	 double n; 	
	 char c;
	 int k,p;
	 cin>>k;
	 for(int j=0;j<k;j++)
	 {
	 	cin>>c;
	 	cin>>p;
	 	m[c]=p;
	 }
	 cin>>k;
	 while(cin>>c)
	 {
	 	if(c!=' ' || c!='\n') 
	 	{
	 	 n+= m[c];
	 	}
	 }
	 n=n/100;
	 printf("%.2f",n);
	 cout<<"$"<<endl;
		i++;
	}
	return 0;
}
