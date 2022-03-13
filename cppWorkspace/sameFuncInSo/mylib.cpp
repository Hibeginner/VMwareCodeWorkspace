#include "mylib.h"

__attribute ((visibility("default"))) void bar(){
    int i = 9;
    foo((void *) &i);
};
