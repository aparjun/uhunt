#include <iostream>
#include <map>
#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    while(cin>>t)
    {
    	if(t==0)
    	{
    		break;
    	}
    	int m=0,c=0;
    	string str,abc[5];
    	getline(cin,str);
    	map<string, int>stud; 
    	map<string, int>::iterator i; 
    	while(t--)
    	{
    		str="";
    		for(int j=0;j<5;j++)
    		{
    			cin>>abc[j];
    		}
    		sort(abc,abc+5);
    		for(int j=0;j<5;j++)
    		{
    		 str=str+abc[j];
    		}
    		stud[str]++;
    		if(m<stud[str])
    		{
    			m=stud[str];
    		}
    	}
    	for(i=stud.begin();i!=stud.end();i++)
    	{
    		if(i->second==m)
    		{
    			c=c+m;
    		}
    	}
    	cout<<c<<endl;
    }
	return 0;
}
