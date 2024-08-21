#include <stdio.h>
#include "Battery_main.h"
#include "BatteryParameterChecker.h"

static int Check_OutOfRange(float value, float min_value, float max_value, enum ParameterType parameter_type) {
    if (is_OutOfRange(value, min_value, max_value)) {
        PrintMessage(0, parameter_type);
        return 1;
    }
    return 0;
}

static void Check_LowerLimit(float value, float min_value, float tolerance, enum ParameterType parameter_type) {
    if (is_NearLowerLimit(value, min_value, tolerance)) {
        PrintMessage(1, parameter_type);
    }
}

static void Check_UpperLimit(float value, float max_value, float tolerance, enum ParameterType parameter_type) {
    if (is_NearUpperLimit(value, max_value, tolerance)) {
        PrintMessage(2, parameter_type);
    }
}

int ParameterCheck(float value, float min_value, float max_value, float tolerance, enum ParameterType parameter_type) {
    if (Check_OutOfRange(value, min_value, max_value, parameter_type)) {
        return 0;
    }
    Check_LowerLimit(value, min_value, tolerance, parameter_type);
    Check_UpperLimit(value, max_value, tolerance, parameter_type);
    return 1;
}
