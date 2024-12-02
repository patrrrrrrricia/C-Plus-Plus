#include <iostream>

using namespace std;

int main()
{
    int n, x, i, n2=0, n5=0;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>x;
        while(x%2==0)
        {
            n2++;
            x/=2;
        }
        while(x%5==0)
        {
            n5++;
            x/=5;
        }
    }
    if(n2<=n5) cout<<n2;
    else cout<<n5;
    return 0;
}