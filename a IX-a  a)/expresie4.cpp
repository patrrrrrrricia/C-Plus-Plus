#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, i, s=0;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        s=s+i*(n-i+1);
    }
        cout<<"Rezultatul este "<<s;
    return 0;
}
