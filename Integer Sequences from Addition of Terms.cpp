#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  int t,m,d,k,n;
  long long c[30];
  long long ans;
  cin>>t;
  while(t--) 
  {
    ans=0;
    cin>>m;
    for(int i=0;i<=m;i++)
    {
      cin>>c[i];
    }
    cin>>d>>k;
    for(n=1;n*n+n<2*k/d;n++);
    {
     for(int i=0;i<=m;i++)
     {
      ans+=c[i]*(long long)pow(n, i);
     }
    }
    cout<<ans<<endl;
  }
  return 0;
}
