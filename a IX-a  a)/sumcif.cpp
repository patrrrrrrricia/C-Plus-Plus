#include <iostream>

using namespace std;

int main()
{
    int n, a, b, c;
    cin>>n;
    a=n/100;
    b=(n/10)%10;
    c=n%10;
    n=a+b+c;
    cout<<n;
    return 0;
}
