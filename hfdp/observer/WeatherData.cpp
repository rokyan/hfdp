#include "WeatherData.hpp"

namespace hfdp::observer
{
WeatherData::WeatherData()
    : temperature(.0)
    , humidity(.0)
    , pressure(.0)
{}

void WeatherData::registerObserver(Observer* observer)
{
    observers.push_back(observer);
}

void WeatherData::removeObserver(Observer* observer)
{
    const auto it = std::find(std::begin(observers), std::end(observers), observer);

    if (it != std::end(observers))
    {
        observers.erase(it);
    }
}

void WeatherData::notifyObservers()
{
    for (const auto& observer : observers)
    {
        observer->update(temperature, humidity, pressure);
    }
}

void WeatherData::measurementsChanged()
{
    notifyObservers();
}

void WeatherData::setMeasurements(double temperature, double humidity, double pressure)
{
    this->temperature = temperature;
    this->humidity = humidity;
    this->pressure = pressure;

    measurementsChanged();
}

} // namespace hfdp::observer