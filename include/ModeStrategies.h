#pragma once
#include "IModeStrategy.h"
#include "IDeviceManager.h"
#include "DeviceType.h"
#include "IDevice.h"
#include <vector>
#include <iostream>
#include <string>

class BaseStrategy : public IModeStrategy {
public:
    virtual void configureDevices(IDeviceManager* dm) = 0;
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
    virtual void configureDevices(IDeviceManager* dm) override;
    virtual std::string getModeName() const { return "Normal"; }
};


class EveningStrategy : public BaseStrategy {
public:
    virtual void configureDevices(IDeviceManager* dm) override;
    virtual std::string getModeName() const { return "Evening"; }
};


class PartyStrategy : public BaseStrategy {
public:
    virtual void configureDevices(IDeviceManager* dm) override;
    virtual std::string getModeName() const { return "Party"; }
};


class CinemaStrategy : public BaseStrategy {
public:
    virtual void configureDevices(IDeviceManager* dm) override;
    virtual std::string getModeName() const { return "Cinema"; }
};