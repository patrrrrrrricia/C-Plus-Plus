#include <iostream>

using namespace std;

int main()
{
    int i, n, p=1, s=0;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        p=i*i;
        s=s+p;
    }
        cout<<"Rezultatul este "<<s;
    return 0;
}
