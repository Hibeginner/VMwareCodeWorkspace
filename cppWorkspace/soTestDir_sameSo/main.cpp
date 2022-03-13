#include <iostream>
#include "addFunc.h"
#include "unistd.h"

int main(void){
   int a = 1;
   int b = 2;
   int c = add(a, b);
   int loopCount = 0;
   while(loopCount <= 1000){
   	loopCount++;
        std::cout<< "result: " << c <<std::endl;   
        sleep(10);
   }

   return 0;
}
