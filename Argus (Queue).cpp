#include <iostream>
#include <queue>

using namespace std;

int y, p, k;
string s;
priority_queue< pair< pair<int, int>, int> > q;
int main() 
{
    while(1)
    {
	  cin>>s;
	  if(s == "#")
	  {
	    break;
	  }
	  cin>>y>>p;
	  q.push(make_pair(make_pair(-p, -y), -p));
    }
    cin>>k;
    while(k--) 
    {
	  auto t = q.top();
	  q.pop();
	  cout<<-t.first.second<<'\n';
	  t.first.first += t.second;
	  q.push(t);
    }
    return 0;
}
