#pragma once

#include "observer.hpp"
#include "display_element.hpp"
#include "weather_data.hpp"

namespace hfdp
{

class current_conditions_display final : public observer, public display_element
{
public:
    current_conditions_display(weather_data* data);

    virtual void update(double temperature, double humidity, double pressure) override;

    virtual void display() const override;

    ~current_conditions_display();

private:
    weather_data* data;

    double temperature;
    double humidity;
};

} // namespace hfdp