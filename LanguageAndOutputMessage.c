#include "Battery_main.h"

void Set_Language(int language) {
    Current_Language = language;
}

int Current_Language = ENGLISH;

const char* messages[][3][3] = {
    // Output messages in English
    {
        {"Temperature is out of range", "Warning: Temperature - Approaching low temperature limit", "Warning: Temperature - Approaching high temperature limit"},
        {"State of Charge is out of range", "Warning: State of Charge - Approaching discharge", "Warning: State of Charge - Approaching charge peak"},
        {"Charge rate is out of range", "Warning: Charge rate - Approaching low charge rate", "Warning: Charge rate - Approaching high charge rate"}
    },
    // Output messages in German
    {
        {"Temperatur ist außerhalb des Bereichs", "Warnung: Temperatur - Annäherung an untere Temperaturgrenze", "Warnung: Temperatur - Annäherung an obere Temperaturgrenze"},
        {"Ladezustand ist außerhalb des Bereichs", "Warnung: Ladezustand - Annäherung an Entladung", "Warnung: Ladezustand - Annäherung an Ladehöhepunkt"},
        {"Laderate ist außerhalb des Bereichs", "Warnung: Laderate - Annäherung an niedrige Laderate", "Warnung: Laderate - Annäherung an hohe Laderate"}
    }
};
