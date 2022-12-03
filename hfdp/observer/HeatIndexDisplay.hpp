#pragma once

#include "Observer.hpp"
#include "DisplayElement.hpp"
#include "WeatherData.hpp"

namespace hfdp::observer
{

class HeatIndexDisplay final : public Observer, public DisplayElement
{
public:
    HeatIndexDisplay(WeatherData* data);

    virtual void update(double temperature, double humidity, double pressure) override;

    virtual void display() const override;

private:
    double computeHeatIndex(double temperature, double humidity) const;

private:
    WeatherData* weatherData;

    double heatIndex;
};

} // namespace hfdp::observer
