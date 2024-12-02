#include <iostream>

using namespace std;

int main()
{
    long long n, p, q, i, x, Np=0, Nq=0;
    cin>>p>>q>>n;
    for(i=1; i<=n; i++)
    {
        cin>>x;
        while(x%p==0)
        {
            x=x/p;
            Np++;
        }
    while(x%q==0)
    {
        x=x/q;
        Nq++;
    }
    }
    if(Np<=Nq) cout<<Np;
    else cout<<Nq;
    return 0;
}
