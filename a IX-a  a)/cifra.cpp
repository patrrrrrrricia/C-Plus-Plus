#include <iostream>

using namespace std;

int main()
{
    int n, c, u, nr=0, p=1;
    cin>>n>>c;
    while(n>0)
    {
        u=n%10;
        if(u!=c) {nr=nr+u*p; p=p*10;}
        n/=10;
    }
    if(p==1) cout<<-1;
    else cout<<nr;
    return 0;
}
