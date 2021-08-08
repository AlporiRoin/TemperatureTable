#include <stdio.h>

int main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;

    printf ("Celsius\tFahrenheit\tFahrenheit\tCelsius\n");

    while (fahr <= upper) {

        celsius = (5.0/9.0) * (fahr-32.0);        

        printf (" %7.0f %10.1f \t %10.1f %7.0f \n", fahr, celsius, celsius, fahr);

        fahr = fahr + step;

    }
}