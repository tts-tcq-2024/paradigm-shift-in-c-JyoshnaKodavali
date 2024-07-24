#include <stdio.h>
#include <stdbool.h>

bool dispalyTemperature(int language);

bool displayTemperatureGerman(int language){
  if(language == 2){
    printf("Temperatur außerhalb des zulässigen Bereichs!\n");
    return true;
  }
  return false;//addition of language is possible in future here
}

bool dispalyTemperature(int language){
  if(language == 1){
    printf("Temperature out of range!\n");
    return true;
  }
  displayTemperatureGerman(language);
}
