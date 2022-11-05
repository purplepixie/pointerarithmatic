#include <stdio.h>

void printData(char* data, int length)
{
    for (int i=0; i<length; ++i)
        printf("%c",data[i]);
    printf("\n");
}

int main()
{
    // Initialise a char* - note this form char x[y] is the same as if we malloc() some RAM
    // then copy the characters in to their relevant positions.
    // We know Hello World is 11 chars long
    char text[11] = "Hello World";

    // Call printData for the text pointer, length 11
    printData(text,11);     // Hello World

    // Call printData for the text pointer, length 2
    printData(text,2);      // He

    // Call printData for the text pointer plus 3 (this means we're effectively starting at text[3])
    printData(text+3,2);    // lo

    // Show how any char* pointer can be used to store the value in the text pointer (it's just a number
    // representing a location in memory)
    char *ptr = text+6;
    printData(ptr,2);       // Wo

    return 0;
}