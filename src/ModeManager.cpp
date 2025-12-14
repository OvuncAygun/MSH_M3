#include "../include/ModeManager.h"

ModeManager::ModeManager(IDeviceManager* dm) {
    this->deviceManager = dm;
    this->currentMode = 0; 
}


ModeManager::~ModeManager() {
}

void ModeManager::setMode(IModeStrategy* mode) {
    this->currentMode = mode;
}

std::string ModeManager::getModeName() const {
    if (this->currentMode) {
        return this->currentMode->getModeName();
    }
    return "None";
}

void ModeManager::applyMode() {
    if (this->currentMode && this->deviceManager) {
        this->currentMode->configureDevices(this->deviceManager);
    }
}