#pragma once

#include "observer.hpp"
#include "display_element.hpp"
#include "weather_data.hpp"

namespace hfdp
{

class forecast_display : public observer, public display_element
{
public:
    forecast_display(weather_data* data);

    virtual void update(double temperature, double humidity, double pressure) override;

    virtual void display() const override;

    ~forecast_display();

private:
    weather_data* data;

    double current_pressure;
    double last_pressure;
};

} // namespace hfdp