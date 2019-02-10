#include <iostream>
#include <map>

using namespace std;

int t,n,x,ans,cnt,temp;
map<int, int> m;
int main() 
{
    cin>>t;
    while(t--)
    {
	 cin>>n;
	 m.clear();
	 ans=0, cnt=0, temp=0;
	 for(int i=1;i<=n;i++)
	 {
	    cin>>x;
	    int lx = m[x];
	    if(lx != 0) 
	    {
		 if(temp<lx)
		 {
		 	temp=lx;
		 }
		 cnt=i-temp-1;
	    }
	    cnt++;
	    m[x]=i;
	    ans=max(ans, cnt);
	}
	cout<<ans<<'\n';
    }
}
