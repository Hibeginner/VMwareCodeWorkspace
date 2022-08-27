#include <iostream>
#include "CClass.h"
#include "DClass.h"
#include "unistd.h"

int main(void){
   CClass cClass;
   DClass dClass;
   int loopCount = 0;
   while(loopCount <= 1000){
   	loopCount++;
        cClass.UseAddFunc();
        dClass.UseAddFunc();
        sleep(10);
   }

   return 0;
}
