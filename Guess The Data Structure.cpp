#include <iostream>
#include <stack>
#include <queue>
using namespace std;

int main() 
{
	int n, op, x;
	while (cin>>n)
	{
		queue<int> q;
		stack<int> s;
		priority_queue<int> pq;
		
		int st=1,qu=1,pr=1;
		
		for (int i=0;i<n;i++)
		{
			cin>>op>>x;
			switch (op) {
			case 1:
				if (st==1)
				{
					s.push(x);
				}
				if (qu==1)
				{
					q.push(x);
				}
				if (pr==1)
				{
					pq.push(x);
				}
				break;
			case 2:
				if (st==1)
				{
					if (s.empty() || s.top() != x)
					{
						st=0;
					}
					else
					{
						s.pop();
					}
				}
				if (qu==1) 
				{
					if (q.empty() || q.front() != x)
					{
						qu=0;
					}
					else
					{
						q.pop();
					}
				}
				if (pr==1)
				{
					if (pq.empty() || pq.top() != x)
					{
						pr=0;
					}
					else
					{
						pq.pop();
					}
				}
				break;
			}
		}

		if (st==1 && qu==0 && pr==0)
		{
			cout << "stack" << endl;
		}
		else if (st==0 && qu==1 && pr==0)
	        {
			cout << "queue" << endl;
	        }
		else if (st==0 && qu==0 && pr==1)
		{
			cout << "priority queue" << endl;
		}
		else if (st==0 && qu==0 && pr==0)
		{
			cout << "impossible" << endl;
		}
		else
		{
			cout << "not sure" << endl;
		}
	}
}

