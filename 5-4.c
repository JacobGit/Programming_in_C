/* The factorial of an integer n, written n!, is the 
product of the consecutive integers 1 through n. For 
example, 5 factorial is calculated as:

5! = 5x4x3x2x1 = 120

Write a program to generate and print a table of the 
first 10 factorials. */

#include <stdio.h>

int main(void)
{
    printf("___n_____n!____\n");
    
    for (int n = 1; n <= 10; n++)
        {
        int n_factorial = 1;
        
        for (int i = n; i > 0; i--)
            n_factorial *= i;
        
        printf("  %2i     %i   \n", n, n_factorial);
        } 
}

