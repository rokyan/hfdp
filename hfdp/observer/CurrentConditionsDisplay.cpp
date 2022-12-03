#include "CurrentConditionsDisplay.hpp"

#include <iostream>

namespace hfdp::observer
{

CurrentConditionsDisplay::CurrentConditionsDisplay(WeatherData* weatherData)
    : weatherData(weatherData)
    , temperature(.0)
    , humidity(.0)
{
    weatherData->registerObserver(this);
}

void CurrentConditionsDisplay::update(double temperature, double humidity, double pressure)
{
    this->temperature = temperature;
    this->humidity = humidity;

    display();
}

void CurrentConditionsDisplay::display() const
{
    std::cout << "Current conditions: " << temperature << " C degrees and " << humidity << " humidity" << std::endl;
    std::cout << "###" << std::endl;
}

CurrentConditionsDisplay::~CurrentConditionsDisplay()
{
    weatherData->registerObserver(this);
}

} // namespace hfdp::observer