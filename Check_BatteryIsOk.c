#include<stdio.h>
#include "Battery_main.h"

int BatteryIsOk(float temperature, float soc, float charge_rate) 
{
    float TemperatureTolerance = 2.25; // 5% of upper limit 45
    float SoCTolerance = 4; // 5% of upper limit 80
    float ChargeRateTolerance = 0.04; // 5% of upper limit 0.8
  
    return (ParameterCheck(temperature, 0, 45, TemperatureTolerance, TEMPERATURE) && ParameterCheck(soc, 20, 80, SoCTolerance, SOC) && ParameterCheck(charge_rate, 0, 0.8, ChargeRateTolerance, CHARGE_RATE));

}
