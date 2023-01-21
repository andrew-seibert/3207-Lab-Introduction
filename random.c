#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char randChar() {
    srand(time(0));
    char letter = 'A' + rand() % ('Z' - 'A' + 1);
    return letter;
}