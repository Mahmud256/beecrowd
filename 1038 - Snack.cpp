#include <bits/stdc++.h>
using namespace std;
int main()
{
    cout << fixed << setprecision(2);
    int X,Y;
    cin>>X>>Y;

    if(X==1)
    {
        cout<<"Total: R$ "<<Y*4.00<<endl;
    }
    if(X==2)
    {
        cout<<"Total: R$ "<<Y*4.50<<endl;
    }
     if(X==3)
    {
        cout<<"Total: R$ "<<Y*5.00<<endl;
    }
     if(X==4)
    {
        cout<<"Total: R$ "<<Y*2.00<<endl;
    }
     if(X==5)
    {
        cout<<"Total: R$ "<<Y*1.50<<endl;
    }

    return 0;
}
