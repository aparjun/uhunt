#include <iostream>
using namespace std;

int main() 
{
	int n=1;
	while(1)
	{
	 int r,c;
	 cin>>r;
	 cin>>c;
	 char a1[r][c];
	 int a2[100][100]={0};
	 if(r==0)
	 {
	 	break;
	 }
	 else
	 {
	 	if(n>1)
	 	{
	 		cout<<"\n";
	 	}
	 }
	 cout<<"Field #"<<n<<":"<<"\n";
	 for(int j=0;j<r;j++)
	 {
	 	for(int k=0;k<c;k++)
	 	{
	 		cin>>a1[j][k];
	 		if(a1[j][k]=='*')
	 		{
	 			if(j-1>=0)
	 			{
	 			 a2[j-1][k]++;	
	 			}
	 			if(k-1>=0)
	 			{
	 			 a2[j][k-1]++;	
	 			}
	 			if(j-1>=0 && k-1>=0)
	 			{
	 			 a2[j-1][k-1]++;
	 			}
	 			if(j+1<r)
	 			{
	 			 a2[j+1][k]++;	
	 			}
	 			if(k+1<c)
	 			{
	 			 a2[j][k+1]++;
	 			}
	 			if(j+1<r && k+1<c)
	 			{
	 			 a2[j+1][k+1]++;
	 			}
	 			if(j+1<r && k-1>=0)
	 			{
	 			 a2[j+1][k-1]++;	
	 			}
	 			if(k+1<c && j-1>=0)
	 			{
	 			 a2[j-1][k+1]++;
	 			}
	 		}
	 	}
	 }
	 for(int j=0;j<r;j++)
	 {
	 	for(int k=0;k<c;k++)
	 	{
	 		if(a1[j][k]=='*')
	 		{
	 			cout<<"*";
	 		}
	 		else
	 		{
	 			cout<<a2[j][k];
	 		}
	 	}
	 	cout<<"\n";
	 }
	 n++;
	}
	return 0;
}
