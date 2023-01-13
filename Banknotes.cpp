#include <iostream>

using namespace std;

int main()
{
    int note[7]={100, 50, 20, 10, 5, 2, 1}, money[7],n,i;
    cin>>n;
    cout<<n<<endl;
    
    for(i=0; i<7; i++)
    {
        money[i] = n/note[i];
        n = n%note[i];
    }
    
    for(i=0; i<7; i++)
    {
        cout<<money[i]<<" nota(s) de R$ "<<note[i]<<",00"<<endl;
    }
    

    return 0;
}
