#include "mylib_i.h"

void foo(void *p){
    printf("foo in so lib = %ld\n", ((long) p));
}
