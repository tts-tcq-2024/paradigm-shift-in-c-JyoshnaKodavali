#include <stdio.h>
#include "Battery_main.h"

void test_Battery(float temperature, float soc, float charge_rate, int language) {
    Set_Language(language);
    if (BatteryIsOk(temperature, soc, charge_rate)) {
        printf("Battery parameters are within range.\n");
    } else {
        printf("Battery parameters are out of range.\n");
    }
}
