// Xander Leatherwood
// CIS-3207-001
// Project 0

//Given Project code

#include <stdlib.h>
#include <stdio.h>
#include "random.h"
#include <time.h>
#define MAX 90
#define MIN 65

// allocates memory for string
char* rand_string_alloc(size_t size);

// generates the random string
void rand_string(char* s, size_t size);

int main()
{
    // generate seed for rng
    srand(time(NULL));

    // set word size to 7
    size_t wordSize = 7;

    // call functions to generate random word
    char* word = rand_string_alloc(wordSize);

    // print the word
    printf("%s\n", word);

    // you're done!
    return 0;
}

char* rand_string_alloc(size_t size)
{
    // allocate enough memory for string
     char *s = malloc(size + 1);
     if (s) {
        // generate string
         rand_string(s, size);
     }
     return s;
}

void rand_string(char *s, size_t size)
{
    size_t i;

    // generate random letter for each letter in string
    for (i = 0; i < size; i++)
    {
        // random number generated within range of corresponding ASCII values for capital letters 'A' - 'Z'
        int randomNumber = rand() % (MAX-MIN + 1) + MIN;

        // randchar called to return the character given the number
        s[i] = randchar(randomNumber);
    }

}