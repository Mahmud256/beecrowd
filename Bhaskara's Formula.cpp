#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double A,B,C,R1,R2,pr1;
    cin>>A>>B>>C;

    pr1 = (B*B) - (4*(A)*(C));
    if(pr1 > 0 && A != 0)
    {
        pr1 = sqrt(pr1);
        R1 = (-B + pr1)/(2*A);
        R2 = (-B - pr1)/(2*A);

        printf("R1 = %.5lf\n", R1);
		printf("R2 = %.5lf\n", R2);

    }
    else
    {
        cout<<"Impossivel calcular"<<endl;
    }

    return 0;
}

