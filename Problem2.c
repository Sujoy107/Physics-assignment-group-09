#include <stdio.h>
#include <math.h>

int main()
{
    int m1 = 3, m2 = 2;
    double lemda1 = 530 * 0.000000001;
      double lemda2 = 700 * 0.000000001;
    double theta1 = 65.0 * (3.1416 / 180.0);
    double d = (m1 * lemda1) / sin(theta1);
    double theta2 = asin(m2 * lemda2 / d) * (180 / 3.1416);
    printf("theta = %.2lf degrees\n", theta2);

    return 0;
}
