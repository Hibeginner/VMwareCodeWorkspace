#include "Lib.h"
#include <stdio.h>
#include <stdint.h>

static int globalStaticIntValue;
static int *globalStaticIntValuePtr = &globalStaticIntValue;

void foobar(int i)
{
    printf("printing from Lib.so %d\n", i);
    printf("printing from Lib.so ap %ld\n", (uintptr_t)globalStaticIntValuePtr);
    printf("printing from Lib.so ap %#x\n", (unsigned int)globalStaticIntValuePtr);
    printf("printing from Lib.so ap %p\n", globalStaticIntValuePtr);
}
