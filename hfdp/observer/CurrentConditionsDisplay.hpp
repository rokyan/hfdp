#pragma once

#include "Observer.hpp"
#include "DisplayElement.hpp"
#include "WeatherData.hpp"

namespace hfdp
{

class CurrentConditionsDisplay final : public Observer, public DisplayElement
{
public:
    CurrentConditionsDisplay(WeatherData* weatherData);

    virtual void update(double temperature, double humidity, double pressure) override;

    virtual void display() const override;

    ~CurrentConditionsDisplay();

private:
    WeatherData* weatherData;

    double temperature;
    double humidity;
};

} // namespace hfdp