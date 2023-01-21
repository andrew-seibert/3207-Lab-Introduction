#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "random.h"

char randChar() {
    char letter = 'A' + rand() % ('Z' - 'A' + 1);
    return letter;
}