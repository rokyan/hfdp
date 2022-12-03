#include "ObserverDemo.hpp"
#include "WeatherData.hpp"
#include "CurrentConditionsDisplay.hpp"
#include "ForecastDisplay.hpp"
#include "HeatIndexDisplay.hpp"

namespace hfdp
{

void ObserverDemo::run() const
{
    WeatherData weatherData;

    CurrentConditionsDisplay currentConditionsDisplay(&weatherData);
    ForecastDisplay forecastDisplay(&weatherData);
    HeatIndexDisplay heatIndexDisplay(&weatherData);

    weatherData.setMeasurements(25.0, 60.0, 30.0);
}

const std::string ObserverDemo::getName() const
{
    return "Observer";
}

} // namespace hfdp