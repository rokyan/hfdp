#pragma once

#include "observer.hpp"
#include "display_element.hpp"
#include "weather_data.hpp"
#include <iostream>

namespace hfdp
{
    class current_conditions_display : public observer, public display_element
    {
    public:
        current_conditions_display(weather_data& data)
        {
            data.register_observer(this);
        }

        virtual void update(double temperature, double humidity, double pressure)
        {
            this->temperature = temperature;
            this->humidity = humidity;

            display();
        }

        virtual void display() const
        {
            std::cout << "Current conditions: " << temperature << " C degrees and " << humidity << " humidity" << std::endl;
        }

    private:
        double temperature;
        double humidity;
    };
}