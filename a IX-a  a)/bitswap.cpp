#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;
    cin>>n>>m;
    n^=m^=n^=m;
    cout<<n<<" "<<m;
    return 0;
}
