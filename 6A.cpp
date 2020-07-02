#include <iostream>
using namespace std;

int main ()
{
    int a,b,c,d;

  cin>>a>>b>>c>>d;
  
  if((a+b>c&&a+c>b&&b+c>a)||(d+b>c&&d+c>b&&b+c>d)||(d+a>c&&d+c>a&&a+c>d)||(d+a>b&&d+b>a&&a+b>d))
  cout<<"TRIANGLE";
  else if ((a == b+c || b == a+c || c == a+b) || (a == b+d || b == a+d || d == a+b) || (a == d+c || d == a+c || c == a+d) || (d == b+c || b == d+c || c == d+b))
  cout<<"SEGMENT";
  else
  cout<<"IMPOSSIBLE";
}


