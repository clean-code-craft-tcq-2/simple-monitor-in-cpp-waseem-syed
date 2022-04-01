#include <assert.h>
#include <iostream>
#include "TestBattery.h"

int main() {
   TestBattery test;
                 /*| temperature |,| soc |,| chargeRate |,| expected O/P|*/
   test.testBattery(       58     ,   60  ,     0.8      ,     false    );
   test.testBattery(       40     ,   80  ,     0.7      ,     true     );
   test.testBattery(       40     ,   50  ,     0.8      ,     false    );
   test.testBattery(       40     ,   50  ,     0.7      ,     true     );
   test.testBattery(       45     ,   20  ,     0.7      ,     true   );
   test.testBattery(       45     ,   80  ,     0.8      ,     true     );
   test.testBattery(       0      ,   20  ,     0.7      ,     false    );
   test.testBattery(       40     ,   60  ,     0.9      ,     false    );
   test.testBattery(       40     ,   90  ,     0.7      ,     false    );
   test.testBattery(       40     ,   19  ,     0.7      ,     false    );
}
