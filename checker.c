#include <stdio.h>
#include <assert.h>
 
// Function to check if temperature is out of range
int isTemperatureOutOfRange(float temperature) {
    if (temperature < 0 || temperature > 45) {
        printf("Temperature out of range!\n");
        return 1; // Return 1 for out of range
    }
    return 0; // Return 0 for within range
}
 
// Function to check if state of charge (SOC) is out of range
int isSocOutOfRange(float soc) {
    if (soc < 20 || soc > 80) {
        printf("State of Charge out of range!\n");
        return 1; // Return 1 for out of range
    }
    return 0; // Return 0 for within range
}
 
// Function to check if charge rate is out of range
int isChargeRateOutOfRange(float chargeRate) {
    if (chargeRate > 0.8) {
        printf("Charge Rate out of range!\n");
        return 1; // Return 1 for out of range
    }
    return 0; // Return 0 for within range
}
 
// Function to check overall battery status based on given parameters
int batteryIsOk(float temperature, float soc, float chargeRate) {
    // Check each parameter against its respective range
    if (isTemperatureOutOfRange(temperature)) {
        return 0; // Temperature out of range
    }
    if (isSocOutOfRange(soc)) {
        return 0; // State of charge out of range
    }
    if (isChargeRateOutOfRange(chargeRate)) {
        return 0; // Charge rate out of range
    }
    return 1; // All parameters within acceptable range
}
 
// Main function to test batteryIsOk function using assertions
int main() {
    // Test cases using assertions
    assert(batteryIsOk(25, 70, 0.7)); // Should pass, all parameters within range
    assert(!batteryIsOk(50, 85, 0));   // Should fail, temperature and SOC out of range
}
