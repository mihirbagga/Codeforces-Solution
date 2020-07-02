#include<bits/stdc++.h>
#include<string>
using namespace std;

int main()
{
  string s;
  cin>>s;
  
  int n=s.size();
  
  if(s[n-2]=='A' ||s[n]=='a'||s[n]=='E'||s[n]=='e'||s[n]=='I'||s[n]=='i'||s[n]=='O'||s[n]=='o'||s[n]=='U'||s[n]=='u'||s[n]=='Y'||s[n]=='y')
  cout<<"YES";
  else
  cout<<"NO";
  
	
	
}
