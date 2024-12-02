#include <iostream>

using namespace std;

int main()

{
    int i, n, MAX, a;
    cin >> n >> MAX;
    for(i=2; i<=n; i++)
    {
            cin >> a;
            if(a>MAX) MAX = a;
    }
    cout << MAX;
    return 0;
}
