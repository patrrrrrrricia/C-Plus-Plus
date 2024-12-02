#include <iostream>

using namespace std;

int main()
{
    int n, f, e, phi;
    cin>>n;
    phi=n;
    for(f=2; n>1 && f*f<=n; f++)
    {
        e=0;
        while(n%f==0)
        {
            e++;
            n=n/f;
        }
        if(e>0)
        {
            phi=phi/f*(f-1);
        }
    }
    if(n>1) phi=phi/n*(n-1);
    cout<<phi;
    return 0;
}
