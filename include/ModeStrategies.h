#pragma once
#include "IModeManager.h"
#include "../external/IDeviceManager.h"
#include <string>

class ModeManager : public IModeManager {
private:
    IModeStrategy* currentMode;
    IDeviceManager* deviceManager;
public:
    ModeManager(IDeviceManager* dm);
    ~ModeManager();
};