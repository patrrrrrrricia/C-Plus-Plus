#include <bits/stdc++.h>
using namespace std;

int main()
{
    int j, i, n, k, r, s;
    cin>>n>>k>>r;
    ///1.
    cout<<n/2<<"\n";
    ///2.
    s = 0;
    ///adun elementele multimii k
    for(i=k*(k-1)/2; i< k*(k-1)/2 +k; i++)
        s+=i;
    ///adun elementele multimii r
    for(i=r*(r-1)/2; i< r*(r-1)/2 +r; i++)
        s+=i;
    /// afisez media aritmetica
    cout<< s/ (k+r) << "\n";
    ///3. 15 16 17 18 19 20
    /// r*(r-1)/2...r*(r-1)/2 +r-1
    j= r*(r-1)/2 +r-1;
    for( i= r*(r-1)/2; i<=j; i+=2)
    {
        cout << i <<" ";
        if(i+1 <= j) cout<<i+1<<" ";
        if(i+2 <= j) cout<<j<<" ";
        j--;
    }
    return 0;
}
