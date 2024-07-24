#include <stdio.h>
#include <stdbool.h>
bool dispalySoc(int language);

bool displaySocGerman(int language){
  if(language == 2){
    printf("Ladezustand außerhalb des Bereichs!\n");
    return true;
  }
  return false;//addition of language is possible in future here
}

bool dispalySoc(int language){
  if(language == 1){
    printf("State of Charge out of range!\n");
    return true;
  }
  displaySocGerman(language);
}
