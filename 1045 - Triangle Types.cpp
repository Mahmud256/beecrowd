#include <bits/stdc++.h>
using namespace std;
int main() {

    double A,B,C;
    cin>>A>>B>>C;

    double arr[3] = {A, B, C};
    sort(arr, arr+3);
    reverse(arr, arr+3);

    A = arr[0];
    B = arr[1];
    C = arr[2];

    if(A>=B+C)
    {
        cout<<"NAO FORMA TRIANGULO\n";
    }
    else
    {
        if(A*A==B*B+C*C)
        {
        cout<<"TRIANGULO RETANGULO\n";
    }
    else if(A*A>B*B+C*C)
    {
        cout<<"TRIANGULO OBTUSANGULO\n";
    }
    else if(A*A<B*B+C*C)
    {
        cout<<"TRIANGULO ACUTANGULO\n";
    }
    if(A==B && B==C)
    {
        cout<<"TRIANGULO EQUILATERO\n";
    }
    else if(A==B || A==C || B==C)
    {
        cout<<"TRIANGULO ISOSCELES\n";
    }

    }

    return 0;
}
