#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main() 
{
 int t,i=0;
 cin>>t;
 while(i<t)
 {
  int m,n,p;
  float x,y;
  char a;
  cin>>a;
  cin>>m;
  cin>>n;
  p=m*n;
  x=m;
  y=n;
  if(a=='r')
  {
   cout<<min(m,n)<<"\n";
  }
  if(a=='k')
  { 
   if(p%2!=0)
   {
    p=p+1;
   }
   cout<<p/2<<"\n";
  }
  if(a=='K')
  {
   x=x/2;
   x=ceil(x);
   y=y/2;
   y=ceil(y);
   cout<<x*y<<"\n";
  }
  if(a=='Q')
  {
   cout<<min(m,n)<<"\n";
  }
  i++;
 }
	return 0;
}
