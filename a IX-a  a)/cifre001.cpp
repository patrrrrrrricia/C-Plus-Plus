#include <iostream>

using namespace std;

int main()
{
    int n, m, nr2=0, nr1=0;
    cin>>n>>m;
    int x=n, y=m, c;
    while(x)
    {
        c=x%10;
        nr1++;
        x/=10;
    }
    while(y)
    {
        c=y%10;
        nr2++;
        y/=10;
    }
    if(nr1==nr2)
    {
        int ct=0;
        while(n>0)
        {
            if(n%10==m%10) ct++;
            n=n/10;
            m=m/10;
        }
        cout<<"DA"<<endl<<ct;
    }
    else cout<<"NU";
    return 0;
}
