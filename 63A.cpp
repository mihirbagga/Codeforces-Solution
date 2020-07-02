#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int count=0;
	vector <string>v;
	
	while(n!=0)
	{
		string a,b;
		cin>>a>>b;
		
		v.push_back(a);
		v.push_back(b);
		n--;
		 
	}
	for(int i=0;i<v.size();i++)
	{
		if(v[i]=='rat')
		cout<<v[i-1];
			
		
	}
	
}
