#include "MSH_M3.h"
#include "ModeManager.h"
#include "ModeStrategies.h"

MSH_M3::MSH_M3() {}
MSH_M3::~MSH_M3() {}

void MSH_M3::setDeviceManager(IDeviceManager* dm) {
    deviceManager = dm;
}

void MSH_M3::initializeModeStrategies() {
    modeStrategies.push_back(new NormalStrategy());
    modeStrategies.push_back(new EveningStrategy());
    modeStrategies.push_back(new PartyStrategy());
    modeStrategies.push_back(new CinemaStrategy());
}

void MSH_M3::initializeModeManager() {
    modeManager = new ModeManager(deviceManager);
    modeManager->setMode(modeStrategies[0]);
}

IModeManager* MSH_M3::getModeManager() {
    return modeManager;
}

std::vector<IModeStrategy*> MSH_M3::getModeStrategies() {
    return modeStrategies;
}