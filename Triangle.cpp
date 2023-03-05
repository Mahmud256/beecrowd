#include <bits/stdc++.h>
using namespace std;
int main()
{
    cout << fixed << setprecision(1);
    double A,B,C,Perimetro, Area;
    cin>>A>>B>>C;

    if(A+B>C && A+C>B && B+C>A)
    {
        cout<<"Perimetro = "<<A+B+C<<endl;
    }
    else
    {
        cout<<"Area = "<<0.5*(A+B)*C<<endl;
    }


    return 0;
}

