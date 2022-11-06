#pragma once

#include "weather_data.hpp"
#include "current_conditions_display.hpp"
#include "forecast_display.hpp"

namespace hfdp
{
    class observer_demo : public demo
    {
    public:
        virtual void run() const
        {
            weather_data wd;

            current_conditions_display cc_display(&wd);
            forecast_display f_display(&wd);

            wd.set_measurements(25.0, 60.0, 30.0);
        }
    };
}