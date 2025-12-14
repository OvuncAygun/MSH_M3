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
    virtual ~ModeManager();

    virtual void setMode(IModeStrategy* mode);
    virtual std::string getModeName() const;
    void applyMode();
};