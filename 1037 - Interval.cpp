#include <iostream>
using namespace std;
 int main() {
     float read;
     cin>>read;

     if(0<=read && read<=25.0000)
     {
         cout<<"Intervalo [0,25]\n";
     }
      else if(read>=25.00001 && read<=50.0000000)
     {
         cout<<"Intervalo (25,50]\n";
     }
     else if(read>=50.00001 && read<=75.0000000)
     {
         cout<<"Intervalo (50,75]\n";
     }
      else if(read>=75.00001 && read<=100.0000000)
     {
         cout<<"Intervalo (75,100]\n";
     }

     else
     {
         cout<<"Fora de intervalo\n";
     }


    return 0;
}
