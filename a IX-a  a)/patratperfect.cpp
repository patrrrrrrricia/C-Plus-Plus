#include <iostream>
#include<cmath>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int r=sqrt(n);
    if(r*r==n) cout<<"da";
    else cout<<"nu";
    return 0;
}
