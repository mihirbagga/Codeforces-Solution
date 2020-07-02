#include<iostream>
#include<vector>
using namespace std;

int main()

{
	string a,b;
	cin>>a>>b;
	vector <char> v;
	
	for(int i=0;i<a.size();i++)
	{
		if(a[i]==b[i])
		{
			v.push_back('0');
		}
		else
		{
			v.push_back('1');
		}
		
	}
	for(int i=0;i<a.size();i++)
	{
		cout<<v.at(i);
	}
	
	
	
}
