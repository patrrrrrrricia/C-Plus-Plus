#include <iostream>

using namespace std;

int main()
{
    long long n, i, n5=0, x;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        x=i;
        while(x%5==0)
        {
            n5++;
            x/=5;
        }
    }
    cout<<n5;
    return 0;
}
