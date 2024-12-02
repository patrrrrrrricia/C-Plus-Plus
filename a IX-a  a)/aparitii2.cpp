#include <iostream>
using namespace std;
int main()

{   int n, p, ap=1;
    cin>>n;
    p=n;
    while(p>9)
    p=p/10;
    while(n>9)
    {
        if(n%10==p) ap++;
        n=n/10;
    }
    cout<<ap;
    return 0;
}
