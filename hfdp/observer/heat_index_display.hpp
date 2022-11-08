#pragma once

#include "observer.hpp"
#include "display_element.hpp"
#include "weather_data.hpp"

namespace hfdp
{

class heat_index_display final : public observer, public display_element
{
public:
    heat_index_display(weather_data* data);

    virtual void update(double temperature, double humidity, double pressure) override;

    virtual void display() const override;

private:
    double compute_heat_index(double temperature, double humidity) const;

private:
    weather_data* data;
    double heat_index;
};

} // namespace hfdp
