#include <bits/stdc++.h>
using namespace std;
int main()
{
    cout << fixed << setprecision(2);

    int note[6]={100, 50, 20, 10, 5, 2},money[6],i;
    int coin[6]={100, 50, 25, 10, 5, 1},mcoin[6];
    double n;

    cin>>n;

     int a = n;

    cout<<"NOTAS:\n";
    for(i=0; i<6; i++)
    {
        money[i] = a/note[i];
        a = a%note[i];

        cout<<money[i]<<" nota(s) de R$ "<<note[i]<<".00"<<endl;
    }

    int temp = n*100;
    int p = temp%100;

    p = a*100+p;


    cout<<"MOEDAS:\n";
    for(i=0; i<6; i++)
    {
        mcoin[i] = p/coin[i];
        p = p%coin[i];
        cout<<mcoin[i]<<" moeda(s) de R$ "<<coin[i]/100.0<<endl;
    }


    return 0;
}
