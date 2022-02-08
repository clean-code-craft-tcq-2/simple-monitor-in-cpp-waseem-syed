#include <iostream>
#include <string>

using namespace std;

#define MIN_TEMPERATURE 0
#define MAX_TEMPERATURE 45
#define MIN_SOC 20
#define MAX_SOC 80
#define CHARGE_RATE 0.8

class Battery
{
    public:
    bool isBatteryOK(float temperature, float soc, float chargeRate);

    private:
    bool checkTemperatureRange(float temperatue);
    bool checkStateOfCharegeRange( float soc);
    bool checkChargeRateRange(float rate);
};