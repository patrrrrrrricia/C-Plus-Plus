#include <iostream>

using namespace std;

int main()
{
    long long a, b, nr1=0, nr2=0, m=10;
    cin>>a>>b;
    int x=a, y=b;
    while(a!=0)
    {
        nr1=nr1+a%2;
        a/=2;
    }
    while(b!=0)
    {
        nr2=nr2+b%2;
        b/=2;
    }
    if(nr1==nr2)
    {
        if(x<y) cout<<x;
        else cout<<y;
    }
    else if(nr1<nr2) cout<<y;
        else  cout<<x;
    return 0;
}