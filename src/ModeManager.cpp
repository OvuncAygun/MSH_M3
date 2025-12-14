#include "../include/ModeManager.h"

ModeManager::ModeManager(IDeviceManager* dm) {
    this->deviceManager = dm;
    this->currentMode = 0; 
}


ModeManager::~ModeManager() {
}