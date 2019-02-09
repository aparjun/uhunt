#include <iostream>
#include <stack>
#include <vector>

using namespace std;

vector<stack<char>> stacks;
stack<char>newstack;
string str;

int add(int j)
{
	for(int i=0;i<stacks.size();i++) //To check in all stacks
	{
		if(str[j]<=stacks[i].top())
		{
			stacks[i].push(str[j]);	
			return 0;
		}
	}
	stacks.push_back(newstack);
	stacks[stacks.size()-1].push(str[j]);
	return 1;
}
int main()
{
	int t=0;
	while(cin>>str && str!="end")
	{
		t++;
		stacks.clear();
		int s=str.size();
		int c=0;
		for(int j=0;j<s;j++)
		{
			c=c+add(j);
		}
		cout<<"Case "<<t<<": "<<c<<"\n";
	}
	return 0;
}
