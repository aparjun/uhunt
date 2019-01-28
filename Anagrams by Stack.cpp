#include <bits/stdc++.h>
using namespace std;

bool isAnagram(string a, string b)
{
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    return a==b;
}

void solve(,int inputPos, int outputPos,string& have,string& goal)
{
	string path="";
	int pops=0,pushes=0;
	stack<char>s;
	char next='i';
    path+=next;

    if(next=='i')
        pushes++,s.push(have[inputPos++]);
    else
    {
        if(s.empty())return; //stack empty, pruning search space
        pops++;
        if(s.top()!=goal[outputPos++])return;
        s.pop();
    }

    if(pushes < have.size())
        solve(path,pops,pushes,s,'i',inputPos,outputPos,have,goal);
    if(pops < have.size())
        solve(path,pops,pushes,s,'o',inputPos,outputPos,have,goal);

    if(path.size() == have.size()*2)
        for(int i=0; i<path.size();i++)
        cout<<path[i]<<(i+1==path.size() ? "\n" : " ");
}

int main()
{
   ios::sync_with_stdio(false);
    string a,b;

    while(cin>>a)
    {
      if(a.empty())break;
        cin>>b;
        if(!isAnagram(a,b))
        {
            cout<<"[\n]\n";
            continue;
        }
        cout<<"[\n";
        stack<char>s;
        solve('i',0,0,a,b);
        cout<<"]\n";
    }
return 0;
   }
