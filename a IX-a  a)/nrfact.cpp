#include <iostream>

using namespace std;

int main()
{
    int n, f, x, e, i, nrMx, M, nr, copie;
    cin>>n;
    nrMx=0;
    M=0;
    for(i=1; i<=n; i++)
    {
        cin>>x;
        nr=0;
        copie=x;
        for(f=2; x>1 and f*f<=x; f++)
        {
            e=0;
            while(x%f==0)
            {
                e++;
                x=x/f;
            }
        if(e>0) nr++;
        }
    if(x>1) nr++;
    if(nr>nrMx)
    {
     nrMx=nr;
     M=copie;
    }
    else if(nrMx==nr && M>copie)
        M=copie;
    }
    cout<<M;
    return 0;
}
