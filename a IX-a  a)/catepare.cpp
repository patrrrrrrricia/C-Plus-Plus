#include <iostream>

using namespace std;

int main()
{
    int x, ct;
    cin>>x;
    ct=0;
    while(x!=0)
    {
        if(x%2==0) ct++;
        cin>>x;
    }
    if(ct==0) cout<<"NU EXISTA";
    else cout<<ct;
    return 0;
}
