#include "heat_index_display.hpp"
#include <iostream>

namespace hfdp
{

heat_index_display::heat_index_display(weather_data* data)
    : data(data)
    , heat_index(.0)
{
    data->register_observer(this);
}

void heat_index_display::update(double temperature, double humidity, double pressure)
{
    heat_index = compute_heat_index(temperature, humidity);

    display();
}

void heat_index_display::display() const
{
    std::cout << "Heat index is " << heat_index << std::endl;
    std::cout << "###" << std::endl;
}

double heat_index_display::compute_heat_index(double temperature, double humidity) const
{
    return ((16.923 + (0.185212 * temperature) + (5.37941 * humidity) - (0.100254 * temperature * humidity) +
        (0.00941695 * (temperature * temperature)) + (0.00728898 * (humidity * humidity)) +
        (0.000345372 * (temperature * temperature * humidity)) - (0.000814971 * (temperature * humidity * humidity)) +
        (0.0000102102 * (temperature * temperature * humidity * humidity)) - (0.000038646 * (temperature * temperature * temperature)) + (0.0000291583 * 
        (humidity * humidity * humidity)) + (0.00000142721 * (temperature * temperature * temperature * humidity)) + 
        (0.000000197483 * (temperature * humidity * humidity * humidity)) - (0.0000000218429 * (temperature * temperature * temperature * humidity * humidity)) +
        0.000000000843296 * (temperature * temperature * humidity * humidity * humidity)) -
        (0.0000000000481975 * (temperature * temperature * temperature * humidity * humidity * humidity)));
}

} // namespace hfdp