#include <iostream>

using namespace std;

int main()
{
    int x, M;
    cin>>x;
    if(x==0)
    { cout<<"NU EXISTA";
      return 0;
    }
    M=-1000001;
    while(x!=0)
    {
        if(x>M) M=x;
        cin>>x;
    }
    cout<<M;
    return 0;
}
