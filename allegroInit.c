#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include "header.h"

void must_init(bool test, const char *description)
{
    if(test) return;

    printf("couldn't nitialize %s\n", description);
    exit(1);
}