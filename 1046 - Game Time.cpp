#include <iostream>
using namespace std;
int main() {

    int s,e,i,j;
    cin>>s>>e;

    i = (24-s)+e;

    if(i>24)
    {
        cout<<"O JOGO DUROU "<<i-24<<" HORA(S)\n";
    }
    else if(i<24)
    {
        cout<<"O JOGO DUROU "<<i<<" HORA(S)\n";
    }
    else
    {
        cout<<"O JOGO DUROU 24 HORA(S)\n";
    }

    return 0;
}
