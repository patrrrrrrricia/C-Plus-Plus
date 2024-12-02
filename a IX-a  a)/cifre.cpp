#include <iostream>

using namespace std;

int main()
{
    int n, a, b, s;
    cin>>n;
    a=n/10%10;
    b=n%10;
    s=a+b;
    cout<<s;
    return 0;
}
