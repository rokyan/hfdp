#include "observer_demo.hpp"
#include "weather_data.hpp"
#include "current_conditions_display.hpp"
#include "forecast_display.hpp"
#include "heat_index_display.hpp"

namespace hfdp
{

void observer_demo::run() const
{
    weather_data wd;

    current_conditions_display cc_display(&wd);
    forecast_display f_display(&wd);
    heat_index_display hi_display(&wd);

    wd.set_measurements(25.0, 60.0, 30.0);
}

} // namespace hfdp