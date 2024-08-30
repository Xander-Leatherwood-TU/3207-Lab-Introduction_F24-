// randchar goes here

// program steps:
// - randomly generate a number within range of integers 65-90
//      that correspond to an ASCII letter value ('A'-'Z')
// - convert ASCII value to character
// - return character 

#include <time.h>
#include <stdlib.h>
#define MAX 90
#define MIN 65

char randchar()
{
    srand(time(NULL));

    char randomLetter;

    // random number generation
    int randomNumber = rand() % (MAX-MIN + 1) + MIN;

    // convert number to char
    randomLetter = (char)randomNumber;

    return randomLetter;
}

