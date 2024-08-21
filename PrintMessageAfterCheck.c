#include <stdio.h>
#include "Battery_main.h"

void PrintMessage(int message_index, enum ParameterType parameter_type) {
    printf("%s\n", messages[Current_Language][parameter_type][message_index]);
}
