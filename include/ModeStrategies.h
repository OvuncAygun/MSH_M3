#pragma once
#include "IModeStrategy.h"
#include "../external/IDeviceManager.h"
#include "../external/DeviceType.h"
#include "../external/IDevice.h"
#include <vector>
#include <iostream>
#include <string>

class BaseStrategy : public IModeStrategy {
protected:
    void toggleDevices(IDeviceManager* dm, DeviceType type, bool turnOn) {
        std::vector<IDevice*> devices = dm->getDeviceByType(type);
        for (size_t i = 0; i < devices.size(); ++i) {
            if (devices[i]) {
                if (turnOn) devices[i]->poweron();
                else devices[i]->poweroff();
            }
        }
    }
};


class NormalStrategy : public BaseStrategy {
public:
    virtual void configureDevices(IDeviceManager* dm);
    virtual std::string getModeName() const { return "Normal"; }
};


class EveningStrategy : public BaseStrategy {
public:
    virtual void configureDevices(IDeviceManager* dm);
    virtual std::string getModeName() const { return "Evening"; }
};


class PartyStrategy : public BaseStrategy {
public:
    virtual void configureDevices(IDeviceManager* dm);
    virtual std::string getModeName() const { return "Party"; }
};