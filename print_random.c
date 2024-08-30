//Given Project code

#include <stdlib.h>
#include <stdio.h>
#include "random.h"

char* rand_string_alloc(size_t size);
void rand_string(char* s, size_t size);

int main()
{
    size_t wordSize = 7;

    char* word = rand_string_alloc(wordSize);

    printf("%s\n", word);

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

void rand_string(char *s, size_t size)
{
    size_t i;

    for (i = 0; i < size; i++)
    {
        s[i] = randchar();
    }

}