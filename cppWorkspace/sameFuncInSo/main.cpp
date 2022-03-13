#include "mylib.h"

extern void bar();

void foo(void *p){
    printf("foo in main, %ld\n", ((long)p));
}

int main(){
    bar();
    return 0;
}
