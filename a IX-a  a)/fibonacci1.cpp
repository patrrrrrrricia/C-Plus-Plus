#include <iostream>

using namespace std;

int main()
{
    int a, b, c, n;
    cin>>n;
    a=0;
    b=1;
    c=a+b;
    cout<<1<<" ";
    while(c<=n)
    {
        cout<<c<<" ";
        a=b;
        b=c;
        c=a+b;
    }
    return 0;
}
