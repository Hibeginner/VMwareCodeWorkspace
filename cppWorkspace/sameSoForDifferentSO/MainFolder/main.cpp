#include <iostream>
#include "BClass.h"
#include "CClass.h"
#include "unistd.h"

int main(void){
   BClass bClass;
   CClass cClass;
   int loopCount = 0;
   while(loopCount <= 1000){
   	loopCount++;
        bClass.UseAddFunc();
        cClass.UseAddFunc();
        sleep(10);
   }

   return 0;
}
