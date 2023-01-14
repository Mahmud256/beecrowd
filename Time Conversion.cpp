#include<iostream>
using namespace std;
int main()
{
    int N,hours=0,minute=0,second=0,minute1=0;
    cin>>N;

    if(N<=3600)
    {
        minute = N/60;
        second = N%60;
        cout<<hours<<":"<<minute<<":"<<second<<endl;
    }

    if(3600<=N)
    {
        hours = N/3600;
        minute1 = N%3600;
        minute = minute1/60;
        second = minute1%60;
        cout<<hours<<":"<<minute<<":"<<second<<endl;
    }

    return 0;
}
