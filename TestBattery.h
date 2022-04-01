#include <assert.h>
#include <iostream>
#include "Battery.h"

class TestBattery
{
  public:
  void testBattery(float temperature, float soc, float chargeRate, bool expectedOutput);
};

void TestBattery::testBattery(float temperature, float soc, float chargeRate, bool expectedOutput)
{
    Battery battery;
    assert(battery.isBatteryOK(temperature, soc, chargeRate) == expectedOutput);
}