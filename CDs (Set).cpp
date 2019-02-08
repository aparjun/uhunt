#include <iostream>
#include <set>

using namespace std;

int main()
{
    int n,m;
    set<long long int> s;
    while (cin>>n>>m && n!=0)
    {
    	int num,count=0;
        s.clear();
        while (n--)
        {
            cin>>num;
            s.insert(num);
        }
        while (m--)
        {
            cin>>num;
            if (s.find(num)!=s.end())
            {
              count++;
            }
        }
        cout<<count<<"\n";
    }
}
