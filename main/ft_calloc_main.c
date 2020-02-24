#include <stdlib.h>
#include <stdio.h>
#include "debug.h"
#include "libft/libft.h"

int main ()
{
	size_t nmemb = 6;
	size_t size = 6;
	char *rst0 = calloc(nmemb, size);
	char *rst = ft_calloc(nmemb, size);
	fprintf(stderr, "adresse str orig\t: %p\n", rst);
	fprintf(stderr, "adresse str\t\t: %p\n", rst0);

}