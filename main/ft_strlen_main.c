#include "debug.h"
#include "libft/libft.h"


int main ()
{
    char src[100] = "01234567890";
 
    size_t i = 0;

    i = 0;

    printf("sizeof size_t = %ld\n", sizeof(size_t));
    printf("sizeof long = %ld\n", sizeof(long));
    printf("sizeof long long = %ld\n", sizeof(long long));


    i = (int)ft_strlen(src);
    debug_print_str("debug : ", 0);
    debug_print_mem_2(&i, "int v");
    printf("printf : %ld\n", i);
}