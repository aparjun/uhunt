#include <iostream>
#include <queue>
using namespace std;

int main() 
{
	int n;
	while(cin>>n && n!=0)
	{
		int m,sum=0,total=0;
		priority_queue<int>q;
		for(int j=0;j<n;j++)
		{
			cin>>m;
			q.push(-m); //negative sign to arrange in ascending order
		}
		while(q.size()>1)
		{
			sum=-q.top();
			q.pop();
			sum=sum-q.top();
			q.pop();
			total=total+sum;
			q.push(-sum);
		}
		cout<<total<<endl;
	}
	return 0;
}
