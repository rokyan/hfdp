#include "ForecastDisplay.hpp"

#include <iostream>

namespace hfdp::observer
{

ForecastDisplay::ForecastDisplay(WeatherData* weatherData)
    : weatherData(weatherData)
    , currentPressure(30.0)
    , lastPressure(.0)
{
    weatherData->registerObserver(this);
}

void ForecastDisplay::update(double temperature, double humidity, double pressure)
{
    lastPressure = currentPressure;
    currentPressure = pressure;

    display();
}

void ForecastDisplay::display() const
{
    std::cout << "Forecast:" << std::endl;

    if (currentPressure > lastPressure)
    {
        std::cout << "Improving weather on the way" << std::endl;
    }
    else if (currentPressure == lastPressure)
    {
        std::cout << "More of the same" << std::endl;
    }
    else
    {
        std::cout << "Watch out for cooler, rainy weather" << std::endl;
    }

    std::cout << "###" << std::endl;
}

ForecastDisplay::~ForecastDisplay()
{
    weatherData->removeObserver(this);
}

} // namespace hfdp::observer