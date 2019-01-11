#include <iostream>
using namespace std;

bool palindrome(int no)
{
  int a,b,temp=0;
  b=no;
  while(no>0)
  {
   a=no%10;
   no=no/10;
   temp=temp*10+a;
  }
  if(temp==b)
  {
   return true;
  }
  else
  {
   return false; 
  }
}
int main() 
{
  int t,i=0;
  cin>>t;
  while(i<t)
  {
  	 int h,m,n;
  	 string str;
  	 cin>>str;
  	 n=(str[0]-'0')*1000+(str[1]-'0')*100+(str[3]-'0')*10+(str[4]-'0');
  	 h=n/100;
  	 m=n%100;
  	 while(1)
  	 {
  	   m++;
  	   if(m>59)
  	   {
  	   	m=0;
  	   	h++;
  	   	if(h>23)
  	   	{
  	   		h=0;
  	   	}
  	   }
  	   n=(h*100)+m;
  	   if(palindrome(n))
  	   { 
  	   	if(h<10)
  	   	{
  	   		cout<<"0";
  	   	}
        cout<<h<<":";
        if(m<10)
        {
        	cout<<"0";
        }
        cout<<m<<"\n";
        break;
  	   }
  	 }  
    i++;
  } 
	return 0;
}

