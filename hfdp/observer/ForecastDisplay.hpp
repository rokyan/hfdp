#pragma once

#include "Observer.hpp"
#include "DisplayElement.hpp"
#include "WeatherData.hpp"

namespace hfdp
{

class ForecastDisplay : public Observer, public DisplayElement
{
public:
    ForecastDisplay(WeatherData* weatherData);

    virtual void update(double temperature, double humidity, double pressure) override;

    virtual void display() const override;

    ~ForecastDisplay();

private:
    WeatherData* weatherData;

    double currentPressure;
    double lastPressure;
};

} // namespace hfdp