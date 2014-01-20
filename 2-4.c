//Fahrenheit to Celsius converter

#include <stdio.h>


int main(void)
{
    int f_temp = 27;
    float c_temp = (f_temp - 32) / 1.8;
    printf("%i degrees Fahrenheit is %.2f degrees Celsius.\n", f_temp, c_temp);
}
