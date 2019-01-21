#include <iostream>
#include <string>

using namespace std;

int main() 
{
	int t,i=0;
    cin>>t;
    while(i<t)
    {
     int n,a=0,b=0;
     cin>>n;
     string str,s[n];
     for(int j=0;j<n;j++)
     {
      cin>>str;
      if(str=="LEFT")
      {
       s[j]="LEFT";
      }
      else
      {
       if(str=="RIGHT")
       {
       	s[j]="RIGHT";
       }
       else
       {
       	cin>>str;
       	cin>>str;
        a=stoi(str);
        a=a-1;
        s[j]=s[a];
       }
      }
     }  
     for(int j=0;j<n;j++)
     {
      if(s[j]=="LEFT")
      {
      	b--;
      }
      else
      {
      	b++;
      }
     }
    cout<<b<<"\n";
     i++;
   }
	return 0;
}
