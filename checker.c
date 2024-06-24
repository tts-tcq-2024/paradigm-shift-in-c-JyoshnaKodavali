#include <stdio.h>
#include <assert.h>

typedef enum {
    OK = 0,
    TEMPERATURE_OUT_OF_RANGE,
    SOC_OUT_OF_RANGE,
    CHARGE_RATE_OUT_OF_RANGE
} ErrorCode;

int batteryIsOk(float temperature, float soc, float chargeRate) {
    if (temperature < 0 || temperature > 45) {
        return TEMPERATURE_OUT_OF_RANGE;
    }
    if (soc < 20 || soc > 80) {
        return SOC_OUT_OF_RANGE;
    }
    if (chargeRate > 0.8) {
        return CHARGE_RATE_OUT_OF_RANGE;
    }
    return OK;
}

const char *errorMessage(ErrorCode errorCode) {
    switch (errorCode) {
        case OK:
            return "No error";
        case TEMPERATURE_OUT_OF_RANGE:
            return "Temperature out of range!";
        case SOC_OUT_OF_RANGE:
            return "State of Charge out of range!";
        case CHARGE_RATE_OUT_OF_RANGE:
            return "Charge Rate out of range!";
        default:
            return "Unknown error";
    }
}

int main() {
    assert(batteryIsOk(25, 70, 0.7) == OK);
    assert(batteryIsOk(50, 85, 0) == TEMPERATURE_OUT_OF_RANGE);

    // Example of printing error messages:
    printf("For temperature 50, state of charge 85, and charge rate 0:\n");
    ErrorCode error = batteryIsOk(50, 85, 0);
    if (error != OK) {
        printf("Error: %s\n", errorMessage(error));
    }

    return 0;
}

