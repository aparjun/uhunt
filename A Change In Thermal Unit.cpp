#include <iostream>
using namespace std;

int main() 
{
   int t,i=1;
   cin>>t;
   while(i<=t)
   {
	float a,b;
	cin>>a;
	a=(a*1.8)+32;
	cin>>b;
	a=a+b;
	a=a-32;
	a=(a*5)/9;
	cout<<"Case "<<i<<": ";
	printf("%.2f",a);
	cout<<"\n";
	i++;
   } 
	return 0;
}
