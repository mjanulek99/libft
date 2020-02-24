#include <stdlib.h>
#include <limits.h>
#include <stdio.h>
#include <string.h>
#include "debug.h"
#include "libft/libft.h"

int main ()
{

    char z[100]="    - 999";
    
    
    long long rst_o = atoi(z);
    long long rst_ft = ft_atoi(z);
    fprintf(stderr, "ft_atoi\t: %lld\n", rst_ft);
    fprintf(stderr, "atoi\t: %lld\n", rst_o);
}