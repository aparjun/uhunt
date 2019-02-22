#include <iostream>
#include <algorithm>
using namespace std;

int main() 
{
	int t;
    cin>>t;
	while (t--)
	{
		int n, grid[8][8];
		cin>>n;
		for(int i=0;i<n;i++) 
		{
			for(int j=0;j<n;j++)
			{
				cin>>grid[i][j];
			}
		}
		int choice[8] = { 0, 1, 2, 3, 4, 5, 6, 7 };
		int min=10000000;
		do {
			int sum=0;
			for(int i=0;i<n;i++)
			{
				sum+=grid[i][choice[i]];
			}
			if(min>sum)
			{
				min=sum;
			}
		} while (next_permutation(choice, choice + n));

		cout<<min<<endl;
	}

	return 0;
}
