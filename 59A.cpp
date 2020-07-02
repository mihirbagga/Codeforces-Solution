#include <cctype>
#include <iostream>
#include <cstring>
#include <cstdio>

using namespace std;

int main()
{   int n;
	string s;
	cin>>s;
	n=s.length();
	int d=0,c=0;
	for(int i=0;i<n;i++)
	
	{
		if(isupper(s[i]))
		{
			c++;
		}
		else
		{
			d++;
		}
		

 	}
 	if(c>d)
 	{
 		for (int i = 0; i < n; ++i)
        {
            s[i] = toupper(s[i]);
        }
 		
	 }
	else
	 {
	 		for (int i = 0; i < n; ++i)
        {
            s[i] = tolower(s[i]);
        }
	 }
	 
	 cout<<s;
	
	
}
