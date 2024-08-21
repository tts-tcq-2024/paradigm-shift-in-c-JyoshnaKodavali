#include <stdio.h>
#include <assert.h>
#include <stdbool.h>
#include "temperatureStateCheck.h"
#include "chargeRateStateCheck.h"
#include "socStateCheck.h"
#include "testPrintMessage.h"


int batteryIsOk(float temperature, float soc, float chargeRate, int language) {
   return tempcheck(temperature,language) && soccheck(soc,language) && chargeRatecheck(chargeRate,language);
}

int main() {
    assert(batteryIsOk(25, 70, 0.7,1));
    assert(batteryIsOk(25, 70, 0.7,2));
    assert(!batteryIsOk(50, 85, 0,1));
    assert(!batteryIsOk(36, 85, 0.8,1));
    assert(!batteryIsOk(50, 46, 0,2));
    assert(batteryIsOk(16, 44, 0.5,1));
}
