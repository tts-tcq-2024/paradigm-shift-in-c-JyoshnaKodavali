#include <stdio.h>
#include <assert.h>
#include <stdbool.h>
#include "print.h"

int batteryIsOk(float temperature, float soc, float chargeRate, int language) {
   return tempcheck(temperature,language) && soccheck(soc,language) && chargecheck(chargeRate,language);
}
//yes
int main() {
    assert(batteryIsOk(25, 70, 0.7,1));
    assert(batteryIsOk(25, 70, 0.7,2));
    assert(!batteryIsOk(50, 85, 0,1));
}
