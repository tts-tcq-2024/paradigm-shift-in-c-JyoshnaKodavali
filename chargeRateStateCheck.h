
int chargeRatecheck(float chargeRate,int language){
    if(chargeRate > 0.8){
         printMessage(chargeRateMessage[language]);
        return 0;
    }
    return 1;
}
