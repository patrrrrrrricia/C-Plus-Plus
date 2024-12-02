#include <iostream>

using namespace std;

int main()
{
    long long x, n, i;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>x;
        while(x%2==0)
        {
            x/=2;
        }
        cout<<x<<" ";
    }
    return 0;
}
