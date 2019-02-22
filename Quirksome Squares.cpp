#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() 
{
	int ar[10000];
	for(int i=0;i<10000;i++)  //Definitely the answer will be a square.
	{                         //So generating all squares upto limit
		ar[i]=i*i;
	}
	int n;
	while(cin>>n)
	{
		int a,b;
		for(int j=0;j<10000;j++)
		{
		  if(ar[j]>=(int)pow(10,n))
		  {
		   break;
		  }
		  a=ar[j]/(int)pow(10,n/2);  //First half
		  b=ar[j]%(int)pow(10,n/2);  //Second half
          if(pow((a+b),2)==ar[j])    //Squaring a+b
          {
          	 cout<<setw(n)<<setfill('0')<<ar[j]<<endl; //Setfill for numbers like 0001
          }
		}
	}
	return 0;
}
