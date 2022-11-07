#include "weather_data.hpp"
#include "observer.hpp"

namespace hfdp
{
weather_data::weather_data()
    : temperature(.0)
    , humidity(.0)
    , pressure(.0)
{}

void weather_data::register_observer(observer* observer)
{
    observers.push_back(observer);
}

void weather_data::remove_observer(observer* observer)
{
    const auto it = std::find(std::begin(observers), std::end(observers), observer);

    if (it != std::end(observers))
    {
        observers.erase(it);
    }
}

void weather_data::notify_observers()
{
    for (const auto& observer : observers)
    {
        observer->update(temperature, humidity, pressure);
    }
}

void weather_data::measurements_changed()
{
    notify_observers();
}

void weather_data::set_measurements(double temperature, double humidity, double pressure)
{
    this->temperature = temperature;
    this->humidity = humidity;
    this->pressure = pressure;

    measurements_changed();
}

} // namespace hfdp