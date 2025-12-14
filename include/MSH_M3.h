#pragma once

#include "IDeviceManager.h"
#include "IModeStrategy.h"

#include <vector>

class MSH_M3 {
public:
    MSH_M3();
    ~MSH_M3();

    std::vector<IModeStrategy*> getModeStrategies();
};