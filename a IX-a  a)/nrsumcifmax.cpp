#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cin>>a>>b>>c;
    int sa, sb, sc;
    sa=a%10+a/10;
    sb=b%10+b/10;
    sc=c%10+c/10;
    int mx;
    if(sa>sb)mx=sa;
        else mx=sb;
    if(sc>mx) mx=sc;
    if(mx==sa) cout<<a<<" ";
    if(mx==sb) cout<<b<<" ";
    if(mx==sc) cout<<c<<" ";
    return 0;
}
