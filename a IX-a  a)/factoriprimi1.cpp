#include <iostream>

using namespace std;

int main()
{
    int f, e, n, nr=1;
    cin>>n;
    for(f=2; n>1 && f*f<=n; f++)
    {
        e=0;
        while(n%f==0)
        {
            e++;
            n=n/f;
        }
    if(e>0) nr=nr*f;
    }
    if(n>1) nr=nr*n;
    cout<<nr;
    return 0;
}
