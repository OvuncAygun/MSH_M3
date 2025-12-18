#include "MSH_M3.h"
#include "ModeManager.h"
#include "ModeStrategies.h"

MSH_M3::MSH_M3() {}
MSH_M3::~MSH_M3() {}

void MSH_M3::setDeviceManager(IDeviceManager* dm) {
    deviceManager = dm;
}

void MSH_M3::initializeModeStrategies() {
    modeStrategies[0] = new NormalStrategy();
    modeStrategies[1] = new EveningStrategy();
    modeStrategies[2] = new PartyStrategy();
    modeStrategies[3] = new CinemaStrategy();
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