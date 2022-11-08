#include "forecast_display.hpp"
#include <iostream>

namespace hfdp
{

forecast_display::forecast_display(weather_data* data)
    : data(data)
    , current_pressure(30.0)
    , last_pressure(.0)
{
    data->register_observer(this);
}

void forecast_display::update(double temperature, double humidity, double pressure)
{
    last_pressure = current_pressure;
    current_pressure = pressure;

    display();
}

void forecast_display::display() const
{
    std::cout << "Forecast:" << std::endl;

    if (current_pressure > last_pressure)
    {
        std::cout << "Improving weather on the way" << std::endl;
    }
    else if (current_pressure == last_pressure)
    {
        std::cout << "More of the same" << std::endl;
    }
    else
    {
        std::cout << "Watch out for cooler, rainy weather" << std::endl;
    }

    std::cout << "###" << std::endl;
}

forecast_display::~forecast_display()
{
    data->remove_observer(this);
}

} // namespace hfdp