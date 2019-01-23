#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() 
{
  int i=0,ar[10000];
  int a,b;
  while(cin>>ar[i])
  {
  	i++;
  	sort(ar,ar+i);
    if(i%2==0)
    {
  	 b=i/2;
  	 a=ar[b]+ar[b-1];
  	 a=a/2;
  	 cout<<a<<endl;
    }
    else
    {
  	  b=i/2;
      cout<<ar[b]<<endl;
    }
  }
  
	return 0;
}
