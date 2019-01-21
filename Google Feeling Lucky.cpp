#include <iostream>
using namespace std;

int main() 
{
	int t,i=1;
	cin>>t;
	while(i<=t)
	{
	 int m=0;	
	 string	s[10];
	 int ar[10];
	 for(int j=0;j<10;j++)
	 {
	 	cin>>s[j];
	 	cin>>ar[j];
	 	if(m<ar[j])
	 	{
	 		m=ar[j];
	 	}
	 }
	 cout<<"Case #"<<i<<":\n";
	 for(int j=0;j<10;j++)
	 {
	   if(ar[j]==m)
	   {
	   	cout<<s[j]<<"\n";
	   }
	 }
	 i++;
	} 
	return 0;
}
