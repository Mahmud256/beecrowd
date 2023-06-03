#include<iostream>
using namespace std;
int main()
{
    int N,year=0,month=0,day=0,month1=0;
    cin>>N;

    if(365<=N)
    {
        year = N/365;
        month1 = N%365;
        month = month1/30;
        day = month1%30;
        cout<<year<<" ano(s)\n"<<month<<" mes(es)\n"<<day<<" dia(s)"<<endl;
    }

     if(N<365)
    {
       month = N/30;
       day = N%30;
       cout<<year<<" ano(s)\n"<<month<<" mes(es)\n"<<day<<" dia(s)"<<endl;
    }

    return 0;
}

