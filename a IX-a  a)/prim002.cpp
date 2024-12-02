#include <iostream>

using namespace std;

int main()
{
    long long n, f, e, mx=0;
    cin>>n;
    for(f=2; n>1 && f*f<=n; f++)
    {
        e=0;
        while(n%f==0)
        {
            mx=f;
            e++;
            n=n/f;
        }
    }
    if(n>1) mx=n;
    cout<<mx;
    return 0;
}