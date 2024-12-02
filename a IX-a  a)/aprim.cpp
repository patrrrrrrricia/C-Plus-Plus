#include <iostream>

using namespace std;

int main()
{
    int prim, n, b, a, i;
    cin>>n;
    for(a=2; a*a<n && n%a!=0; a++)
    {
     ;
    }
    if(a*a>=n) cout<<"NU";
    else
    {
        b=n/a;
        prim=1;
        for(i=2; i*i<=b; i++)
        {
            if(b%i==0) prim=0;
        }
        if(prim==0) cout<<"NU";
        else cout<<"DA";
    }
    return 0;
}
