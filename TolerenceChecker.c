#include <stdio.h>
#include "Battery_main.h"

int is_OutOfRange(float value, float min_value, float max_value) {
    return (value < min_value || value > max_value);
}

int is_NearLowerLimit(float value, float min_value, float tolerance) {
    return (value < min_value + tolerance);
}

int is_NearUpperLimit(float value, float max_value, float tolerance) {
    return (value > max_value - tolerance);
}
