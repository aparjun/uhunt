#include <iostream>
#include <algorithm>
using namespace std;

int main() 
{
	int t,i=1;
	cin>>t;
	 cout<<"Lumberjacks:\n";
	while(i<=t)
	{
	 int f=0;	
	 int a[10],b[10];
	 for(int j=0;j<10;j++)
	 {
	 	cin>>a[j];
	 	b[j]=a[j];
	 }
	 sort(a, a+10);
	 if(a[0]==b[9])
	 {
	 	reverse(a, a+10);
	 }
	 for(int j=0;j<10;j++)
	 {
	   if(a[j]!=b[j])
	   {
	   	f++;
	   }
	 }
	 if(f==0)
	 {
	 	cout<<"Ordered\n";
	 }
	 else
	 {
	 	cout<<"Unordered\n";
	 }
	 i++;
	} 
	return 0;
}
