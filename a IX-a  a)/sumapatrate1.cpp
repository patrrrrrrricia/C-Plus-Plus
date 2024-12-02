#include <iostream>
using namespace std;

int main()
{
    int i, n, s = 0, p = 1;
    cin >> n;
    for (i = 1; i * i <= n; i++)
    {
    p = i * i;
    s = s + p;
    }
    cout<< "Rezultatul este " << s;
    return 0;
}