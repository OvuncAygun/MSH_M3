#pragma once

#include "IDeviceManager.h"
#include "IModeStrategy.h"
#include "IModeManager.h"

#include <vector>

class MSH_M3 {
public:
    MSH_M3();
    ~MSH_M3();

    void setDeviceManager(IDeviceManager* dm);
    void initializeModeManager();
    void initializeModeStrategies();

    std::vector<IModeStrategy*> getModeStrategies();
    IModeManager* getModeManager();

private:
    IDeviceManager* deviceManager;
    IModeManager* modeManager;
    std::vector<IModeStrategy*> modeStrategies;

};