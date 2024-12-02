#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int d=2, e, mx=0, dmx=0;
    while(n>1)
    {
        e=0;
        while(n%d==0)
        {
            e++;
            n/=d;
        }
        if(e>0)
        {
            if(e>=mx && d>dmx)
            mx=e, dmx=d;
        }
        d++;
        if(d*d>n)
        d=n;
    }
    cout << dmx;
}
