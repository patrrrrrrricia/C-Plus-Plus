#include <iostream>

using namespace std;

int main()
{
    int n, x, d, i, a, b, aux, prim, ct=0;
    cin>>a>>b;
    if(a>b)
    {
        aux=a;
        a=b;
        b=aux;
    }
    if(a<2) a=2;
    for(i=a; i<=b; i++)
    {
        x=i;
        prim=1;
        for(d=2; d*d<=x && prim; d++)
            if(x%d==0) prim=0;
        if(prim==1) ct++;
    }
    cout<<ct;
    return 0;
}
