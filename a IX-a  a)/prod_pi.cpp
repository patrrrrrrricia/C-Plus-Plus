#include <iostream>

using namespace std;

int main()
{
    int n, c, m, M;
    cin>>n;
    m=9;
    M=0;
    while(n!=0)
    {
        c=n%10;
        if(c>M and c%2==0) M=c;
        if(c<m and c%2==1) m=c;
        n/=10;
    }
    cout<<M*m;
    return 0;
}
