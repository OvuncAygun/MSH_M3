#pragma once

#include <string>
#include "../external/IDeviceManager.h"
class IModeStrategy {
public:
    virtual ~IModeStrategy() = default;

    virtual void configureDevices(IDeviceManager* dm) = 0;

    virtual std::string getModeName() const = 0;
};