#include <iostream>

using namespace std;

int main()
{
    int n, x, i, d, mx, ap;
    bool prim;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>x;
        ///prelucrez x
        ///verific daca x este prim
        prim=1;
        if(x<2) prim=0;
        for(d=2; d*d<=x; d++)
            if(x%d==0) prim=0;
        if(prim==1)
        {
            if(x>mx)
            {
                mx=x;
                ap=1;
            }
            else if(x==mx) ap++;
        }
    }
    cout<<mx<<" "<<ap;
    return 0;
}