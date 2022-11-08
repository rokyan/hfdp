#include "current_conditions_display.hpp"
#include <iostream>

namespace hfdp
{

current_conditions_display::current_conditions_display(weather_data* data)
    : data(data)
    , temperature(.0)
    , humidity(.0)
{
    data->register_observer(this);
}

void current_conditions_display::update(double temperature, double humidity, double pressure)
{
    this->temperature = temperature;
    this->humidity = humidity;

    display();
}

void current_conditions_display::display() const
{
    std::cout << "Current conditions: " << temperature << " C degrees and " << humidity << " humidity" << std::endl;
    std::cout << "###" << std::endl;
}

current_conditions_display::~current_conditions_display()
{
    data->register_observer(this);
}

} // namespace hfdp