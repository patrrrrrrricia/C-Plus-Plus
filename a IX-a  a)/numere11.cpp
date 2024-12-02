#include <iostream>

using namespace std;

int main()
{
    long long n, f, e, mx=0, s=0, i, x;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>x;
        for(f=2; x>1 && f*f<=x; f++)
        {
            e=0;
            while(x%f==0)
            {
                mx=f;
                e++;
                x/=f;
            }
        }
    if(x>1) mx=x;
    s=s+mx;
    }
    cout<<s;
    return 0;
}
