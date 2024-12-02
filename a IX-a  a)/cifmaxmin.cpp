#include <iostream>

using namespace std;

int main()
{
    int n, mx=0, mn=9, c;
    cin>>n;
    if(n==0) {cout<<0; return 0;}
    while(n>0)
    {
        c=n%10;
        if(c>mx) mx=c;
        if(c<mn) mn=c;
        n=n/10;
    }
    cout<<mx+mn;
    return 0;
}