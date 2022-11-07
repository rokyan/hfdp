#pragma once

#include "subject.hpp"
#include "observer.hpp"
#include <vector>

namespace hfdp
{

class weather_data final : public subject
{
public:
    weather_data();

    virtual void register_observer(observer* observer) override;

    virtual void remove_observer(observer* observer) override;

    virtual void notify_observers() override;

    void measurements_changed();

    void set_measurements(double temperature, double humidity, double pressure);

private:
    std::vector<observer*> observers;

    double temperature;
    double humidity;
    double pressure;
};

} // namespace hfdp