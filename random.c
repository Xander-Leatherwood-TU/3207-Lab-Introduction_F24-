// randchar goes here

// program steps:
// - randomly generate a number within range of integers 65-90
//      that correspond to an ASCII letter value ('A'-'Z')
// - convert ASCII value to character
// - return character 

#include <time.h>
#include <stdlib.h>


char randchar()
{
    srand(time(NULL));
    int r = rand();

    char randomLetter;

    // random number generation

    // convert number to char

    return randomLetter;
}

