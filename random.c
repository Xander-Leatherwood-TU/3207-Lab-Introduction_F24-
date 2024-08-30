// randchar goes here

// program steps:
// - randomly generate a number within range of integers 65-90
//      that correspond to an ASCII letter value ('A'-'Z')
// - convert ASCII value to character
// - return character 

#include <stdlib.h>

char randchar(int randomNumber)
{

    char randomLetter;


    // convert number to char
    randomLetter = (char)randomNumber;

    return randomLetter;
}

