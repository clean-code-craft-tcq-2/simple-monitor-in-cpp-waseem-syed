#include "Battery.h"
#include <iostream>
#include <string>

using namespace std;

bool Battery::isBatteryOK(float temperature, float soc, float chargeRate)
{
   bool isBatteryOk = false;
   if(checkTemperatureRange(temperature) && checkStateOfCharegeRange(soc) && checkChargeRateRange(chargeRate))
   {
      isBatteryOk = true;
   }
    return isBatteryOk;
}

bool Battery::checkTemperatureRange(float temperatue)
{
   bool isTemperatureInRange = true;
   if(temperatue < MIN_TEMPERATURE || temperatue > MAX_TEMPERATURE))
   {
      isTemperatureInRange = false;
      cout << "Temperature out of range!\n";
   }
   return isTemperatureInRange;
}

bool Battery::checkStateOfCharegeRange(float soc)
{
   bool isSOCInRange = true;  
   if(soc < MIN_SOC || soc > MAX_SOC))
   {
      isSOCInRange = false;
      cout << "SOC out of range!\n";
   }
   return isSOCInRange;
}

bool Battery::checkChargeRateRange(float rate)
{
   bool isChargeRateInRange = true;
   if(rate > CHARGE_RATE))
   {
      isChargeRateInRange = false;
      cout << "Charge Rate out of range!\n";
   }
   return isChargeRateInRange;
}
