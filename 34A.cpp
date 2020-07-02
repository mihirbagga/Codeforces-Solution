#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	
	int arr[n];
	int b[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		b[i]=arr[i];
	}
   sort(b,b+n);
   int diff=INT_MAX;
   int g,h;
   for(int i=0;i<n;i++)
   {
   	if((abs(b[i]-b[i+1])<diff))
   	{
   		diff=abs(b[i]-b[i+1]);
   		g=i;
   		h=i+1;
   		
	   }
   	
   }
   
for(int i=0;i<n;i++)
{
	if(g==arr[i])
	{
	cout<<i+1<<" ";
	i=i+1;
	
    }
	if(h==arr[i])
	cout<<i+1<<" ";
	
	
	
}
    
	
	
}
