#include <stdio.h>
#include <assert.h>

int batteryIsOk(float temperature, float soc, float chargeRate) {
  int retval ;
  retval = 1;
  if(temperature < 0 || temperature > 45) {
    printf("Temperature out of range!\n");
    retval=0;
    //return 0;
  }

 else if(soc < 20 || soc > 80) {
    printf("State of Charge out of range!\n");
   retval=0;
    //return 0;
  } 

else if(chargeRate > 0.8) {
    printf("Charge Rate out of range!\n");
  retval=0;
   // return 0;
  }
  else
  {
    retval= 1;
  }
  return retval;
}

int main() {
  assert(batteryIsOk(25, 70, 0.7));
  assert(!batteryIsOk(50, 85, 0));
}
