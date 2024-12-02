#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n, i, a;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>a;
        if(a&1) cout<<1<<" ";
        else cout<<0<<" ";
    }
    return 0;
}

