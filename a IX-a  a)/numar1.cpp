#include <iostream>

using namespace std;

int main()
{
    int n, P;
    cin>>n;
    P=(n/100)*10+(n%10);
    cout<<P*P<<endl;
    return 0;
}