//Guess the output...
//Should say "d = 'd'"
//Said "d = d"

#include <stdio.h>

int main(void)
{
    char c, d;
    
    c = 'd';
    d = c;
    printf("d = %c\n", d);
    
    return 0;
}
