//Given Project code

#include <stdlib.h>
#include "random.h"

char* rand_string(char* s, size_t size);
char* rand_string_alloc(size_t size);

int main()
{
    // allocate memory for s-char string
    // call random character generator s times
    // each time, add random character to string
    // when finished, print string
    
    return 0;
}

char* rand_string_alloc(size_t size)
{
     char *s = malloc(size + 1);
     if (s) {
         rand_string(s, size);
     }
     return s;
}