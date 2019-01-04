#include <iostream>
using namespace std;

int main() 
{
	int n;
	while(cin>>n)
	{
		int d=0;
		if(n==0)
		{
			break;
		}
		string ch;
		for(int j=1;j<n;j++)
		{
		 cin>>ch;
		 if(ch=="+z")
		 {
		 	if(d==0)        d=4;
            else if(d==1)   d=5;
            else if(d==4)   d=1;
            else if(d==5)   d=0;
		 }
		 if(ch=="-z")
		 {
		 	if(d==0)        d=5;
            else if(d==1)   d=4;
            else if(d==4)   d=0;
            else if(d==5)   d=1;
		 }
		 if(ch=="+y")
		 {
		 	if(d==0)        d=2;
            else if(d==1)   d=3;
            else if(d==2)   d=1;
            else if(d==3)   d=0;
		 }
		 if(ch=="-y")
		 {
		 	if(d==0)        d=3;
            else if(d==1)   d=2;
            else if(d==2)   d=0;
            else if(d==3)   d=1;
		 }
		}
		if(d==0)  
		 	{
		 	 cout<<"+x";
		 	} 
            if(d==1)
            {
             cout<<"-x";
            } 
            if(d==2)
            {
             cout<<"+y";
            } 
            if(d==3)
            {
             cout<<"-y";
            } 
            if(d==4)
            {
             cout<<"+z";
            } 
            if(d==5)
            {
             cout<<"-z";
            } 
            cout<<"\n";
	}
	return 0;
}
