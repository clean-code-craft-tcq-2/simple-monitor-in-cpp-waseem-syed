#include "Battery.h"
#include <iostream>
#include <string>

using namespace std;

void Battery::printWarning(string warningType)
{
    cout << warningType.append(" is out of range!") << ::endl;
}

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
   if(false == (temperatue > MIN_TEMPERATURE && temperatue <= MAX_TEMPERATURE))
   {
      isTemperatureInRange = false;
	  string temperatue("TEMPERATURE");
	  printWarning(temperatue);
   }
   return isTemperatureInRange;
}

bool Battery::checkStateOfCharegeRange(float soc)
{
   bool isSOCInRange = true;  
   if(false == (soc >= MIN_SOC && soc <= MAX_SOC))
   {
      isSOCInRange = false;
      string soc("SOC");
      printWarning(soc);
   }
   return isSOCInRange;
}

bool Battery::checkChargeRateRange(float rate)
{
   bool isChargeRateInRange = true;
   if(false == (rate <= CHARGE_RATE))
   {
      isChargeRateInRange = false;
      string chargeRate("CHARGE RATE");
      printWarning(chargeRate); 
   }
   return isChargeRateInRange;
}
