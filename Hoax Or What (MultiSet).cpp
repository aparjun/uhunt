#include <iostream>
#include <set>

using namespace std;

int n;
long long sum;
multiset<int> s; //multiset is used to carry duplicates
int main() 
{
	int x,y;
	auto a,b;
    while(cin>>n && n!=0)
    {
	 sum=0;
	 s.clear();
	 for(int i=0;i<n;i++)
	 {
	    cin>>x;
	    for(int i=0;i<x;i++)
	    {
		 cin>>y;
		 s.insert(y);
	    }
	    a=s.end();
	    b=s.begin();
	    a--;//s.end() is the location after the last element
	    sum += (*a)-(*b);
	    s.erase(a); 
	    s.erase(b);
	 }
	 cout<<sum<<'\n';
    }
    return 0;
}
