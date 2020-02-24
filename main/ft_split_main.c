#include "debug.h"
#include "libft/libft.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int main ()
{
    char c = 'c';
    char s[100]="cesi";

    write(1, &c, 1);
    write(1, s, 5);
    write(1, 'r', 1);
}