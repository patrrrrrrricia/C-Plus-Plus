#include <iostream>

using namespace std;

int main()
{
    int a, b, c, n, x, i;
    cin>>n;
    while(n>0)
    {
        a=1;
        b=1;
        while(a+b<=n)
        {
            c=a+b;
            a=b;
            b=c;
        }
    cout<<c<<" ";
    n=n-c;
    if(n==1)
    {
        cout<<1;
        n--;
    }
    }
    return 0;
}
