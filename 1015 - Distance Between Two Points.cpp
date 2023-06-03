#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double X,x2,x1,Y,y2,y1,Distance;
    cin>>x1>>y1>>x2>>y2;

    X = (x2-x1);
    Y = (y2-y1);

    Distance = sqrt(pow(X,2)+pow(Y,2));

    printf("%.4lf\n", Distance);

    return 0;
}


