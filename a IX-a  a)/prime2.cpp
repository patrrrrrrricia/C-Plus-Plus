#include <iostream>

using namespace std;

int main()
{
    int n, x, d, i, prim, ct=0;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>x;
        ///prelucrez pe x
        ///verific daca este prim
        prim=1;
        if(x<2) prim=0;
        for(d=2; d*d<=x && prim; d++)
            if(x%d==0) prim=0;
        ///prim ?? 0 sau 1
        if(prim==1) ct++;
    }
    cout<<ct;
    return 0;
}
