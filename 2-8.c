//Next largest multiple
//Algorithm = i + j - i % j

#include <stdio.h>

int main(void)
{
    int i1 = 365, i2 = 12258, i3 = 996;
    int j1 = 7, j2 = 23, j3 = 4;
    
    printf("Answer with i = %i and j = %i: %i\n", i1, j1, i1 + j1 - i1 % j1);
    printf("Answer with i = %i and j = %i: %i\n", i2, j2, i2 + j2 - i2 % j2);
    printf("Answer with i = %i and j = %i: %i\n", i3, j3, i3 + j3 - i3 % j3);
}
