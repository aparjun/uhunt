#include <iostream>
using namespace std;
int convert(char a)
{
 switch (a) {
	case 'w':
		return 1;
	case 'x':
		return 2;
	case 'y':
		return 3;
	case 'z':
		return 4;
	case 't':
		return 1;
	case 'u':
		return 2;
	case 'v':
		return 3;
	case 'p':
		return 1;
	case 'q':
		return 2;
	case 'r':
		return 3;
	case 's':
		return 4;
	case 'm':
		return 1;
	case 'n':
		return 2;
	case 'o':
		return 3;
	case 'j':
		return 1;
	case 'k':
		return 2;
	case 'l':
		return 3;
	case 'g':
		return 1;
	case 'h':
		return 2;
	case 'i':
		return 3;
	case 'd':
		return 1;
	case 'e':
		return 2;
	case 'f':
		return 3;
	case 'a':
		return 1;
	case 'b':
		return 2;
	case 'c':
		return 3;
	}	
}
int main() 
{
	int t,i=0;
	cin>>t;
	while(i<t)
	{
		int n=0;
		string str;
		getline(cin,str);
		for(int j=0;j<str.size();j++)
		{
		 if(str[j]!=' ')
		 {
		  n++;
		 }
		 else
		 {
		  n=n+convert(str[j]);
		 }
		}
		cout<<"Case #"<<i+1<<
		cout<<"\n";
		i++;
	}
	return 0;
}
