#include <iostream>

using namespace std;

int main()

{
    int i, n, MIN, a;
    cin >> n >> MIN;
    for(i=2; i<=n; i++)
    {
            cin >> a;
            if(a<MIN) MIN = a;
    }
    cout << MIN;
    return 0;
}
