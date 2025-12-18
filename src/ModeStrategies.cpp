#include "../include/ModeStrategies.h"
#include "../external/DeviceType.h" 


void NormalStrategy::configureDevices(IDeviceManager* dm) {
    this->toggleDevices(dm, TYPE_Light, true);
    this->toggleDevices(dm, TYPE_Music, false);
}



void EveningStrategy::configureDevices(IDeviceManager* dm) {
    this->toggleDevices(dm, TYPE_Light, false);
    this->toggleDevices(dm, TYPE_Music, false);
    this->toggleDevices(dm, TYPE_TV, true); 
}



void PartyStrategy::configureDevices(IDeviceManager* dm) {
    this->toggleDevices(dm, TYPE_Light, true);
    this->toggleDevices(dm, TYPE_Music, true);
    this->toggleDevices(dm, TYPE_TV, false); 
}


void CinemaStrategy::configureDevices(IDeviceManager* dm) {
    this->toggleDevices(dm, TYPE_Light, false);
    this->toggleDevices(dm, TYPE_Music, false);
    this->toggleDevices(dm, TYPE_TV, true);
}