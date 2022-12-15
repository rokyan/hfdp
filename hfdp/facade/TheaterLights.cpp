#include "TheaterLights.hpp"

namespace hfdp::facade
{

TheaterLights::TheaterLights(const std::string& description)
    : Appliance(description)
{}

void TheaterLights::on()
{
    print("on");
}

void TheaterLights::off()
{
    print("off");
}

void TheaterLights::dim(int level)
{
    print("dimming to ", level);
}

} // namespace hfdp::facade