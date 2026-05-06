#include "stringWrap.h"

#include <string.h>

StringWrap stringWrapCreate(char *str) {
    StringWrap sw;
    strcpy(sw.text, str);
    return sw;
}