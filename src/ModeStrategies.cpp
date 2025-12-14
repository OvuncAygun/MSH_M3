#include "../include/ModeStrategies.h"
#include "../external/DeviceType.h" 


void NormalStrategy::configureDevices(IDeviceManager* dm) {
    
    this->toggleDevices(dm, Light, true);
    this->toggleDevices(dm, Music, false);
}



void EveningStrategy::configureDevices(IDeviceManager* dm) {
    
    this->toggleDevices(dm, Light, false);
    this->toggleDevices(dm, Music, false);
    
    this->toggleDevices(dm, TV, true); 
}



void PartyStrategy::configureDevices(IDeviceManager* dm) {
    
    this->toggleDevices(dm, Light, true);
    this->toggleDevices(dm, Music, true);
    this->toggleDevices(dm, TV, false); 
}