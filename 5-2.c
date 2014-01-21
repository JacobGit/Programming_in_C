/* Write a program to generate and display a table
of n and n^2, for integer values of n ranging from
1 to 10. Be certain to print appropriate column headings.*/

#include <stdio.h>

int main(void)
{
    printf("___N_____N^2___\n");
    
    for (int n = 1; n <= 10; n++)
        printf("  %2i     %i   \n", n, n*n);
}

