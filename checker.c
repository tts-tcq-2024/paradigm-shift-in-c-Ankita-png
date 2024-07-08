#include <stdio.h>
#include <assert.h>
 
int isTemperatureOutOfRange(float temperature) {
    // Decision Point 1
    if (temperature < 0 || temperature > 45) {
        printf("Temperature out of range!\n");
        return 1;
    }
    return 0;
}
 
int isSocOutOfRange(float soc) {
    // Decision Point 1
    if (soc < 20 || soc > 80) {
        printf("State of Charge out of range!\n");
        return 1;
    }
    return 0;
}
 
int isChargeRateOutOfRange(float chargeRate) {
    // Decision Point 1
    if (chargeRate > 0.8) {
        printf("Charge Rate out of range!\n");
        return 1;
    }
    return 0;
}
 
int batteryIsOk(float temperature, float soc, float chargeRate) {
    // Decision Point 1
    if (isTemperatureOutOfRange(temperature)) {
        return 0;
    }
    // Decision Point 2
    if (isSocOutOfRange(soc)) {
        return 0;
    }
    // Decision Point 3
    if (isChargeRateOutOfRange(chargeRate)) {
        return 0;
    }
    return 1;
}
 
int main() {
    assert(batteryIsOk(25, 70, 0.7));
    assert(!batteryIsOk(50, 85, 0));
}

has context menu
