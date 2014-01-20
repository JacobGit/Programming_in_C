//Evaluating a polynomial

#include <stdio.h>

int main(void)
{
    float x = 2.55;
    float ans = 3*(x*x*x) - 5*(x*x) + 6;
    printf("Polynomial = 3x**3 - 5x**2 + 6\n");
    printf("When x = 2.55, it evaluates to %.2f\n", ans);
}
