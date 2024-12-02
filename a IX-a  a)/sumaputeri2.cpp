#include <iostream>

using namespace std;

int main()
{
    int n, a, e=1;
    cin>>n;
    while(n!=0)
    {
        a=n%2;
        n/=2;
        if(a==1) cout<<e<<" ";
        e=e*2;
    }
    return 0;
}