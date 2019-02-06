#include <iostream>
#include <map>
using namespace std;

int main()
{
	string str;
	int t;
	cin>>t;
	getline(cin,str);
	while(t--)
	{
		int n=0;
		map<string, int>m;
		while(getline(cin,str));
		{
		 if(str=="")
		 {
			break;
		 }
		 m[str]++;
		 n++;
		}
		
		for(map<string, int>::iterator i=m.begin();i!=m.end();i++)
		{
			cout<<i->first<<" "<<i->second;
		}
	}
	return 0;
}
