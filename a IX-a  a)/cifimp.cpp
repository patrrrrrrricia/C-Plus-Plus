#include <iostream>
using namespace std;
int main()
{   int u, z, s, n;
    cin>>n;
    u=n%10;
    z=n/10%10;
    s=n/100%10;
    int nr=0;
    if(u%2==1) nr=nr+1;
    if(z%2==1) nr=nr+1;
    if(s%2==1) nr++;
    cout<<nr;
    return 0;
}
