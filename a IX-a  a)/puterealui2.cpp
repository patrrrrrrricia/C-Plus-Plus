#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    while((n&1)==0)
    n>>=1;
    if(n==1) cout<<"DA\n";
    else cout<<"NU\n";
    return 0;
}
