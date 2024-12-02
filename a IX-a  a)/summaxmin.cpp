#include <iostream>

using namespace std;

int main()
{
    int i, n, a, MAX, MIN;
    cin >> n >> a;
    MIN = MAX = a;
    for(i=2;i<=n;++i)
    {
        cin >> a;
        if(a>MAX)
            MAX = a;
        if(a<MIN)
            MIN = a;
    }
    cout << MAX + MIN;
    return 0;
}