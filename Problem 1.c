#include <stdio.h>
#include <math.h>

int main()
{
    double wavelength, a1, a2, a3, theta1, theta2, theta3, a_input;
    int m;
    printf("Input the wavelength and m:\n");
    scanf("%lf %d", &wavelength, &m);
    if(wavelength < 380 || wavelength > 750)
    {
        printf("Out of the range\n");
    }
    else 
    {
        wavelength = wavelength * 0.000000001;
        printf("Input three values of slit distance:\n");

        scanf("%lf", &a1);
        a_input = a1 * 0.000001;
        theta1 = asin(m * wavelength / a_input) * (180 / 3.1416);

        scanf("%lf", &a2);
        a_input = a2 * 0.000001;
        theta2 = asin(m * wavelength / a_input) * (180 / 3.1416);

        scanf("%lf", &a3);
        a_input = a3 * 0.000001;
        theta3 = asin(m * wavelength / a_input) * (180 / 3.1416);

        double max_a;
        if (theta1 > theta2 && theta1 > theta3)
        {
            max_a = a1;
        }
        else if (theta2 > theta1 && theta2 > theta3)
        {
            max_a = a2;
        }
        else
        {
            max_a = a3;
        }

        printf("max a: %.2lf micrometer\n", max_a);
        return 0;
    }
}
