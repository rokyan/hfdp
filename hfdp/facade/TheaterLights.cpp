#include "TheaterLights.hpp"

#include <iostream>

namespace hfdp::facade
{

TheaterLights::TheaterLights(const std::string& description)
    : description(description)
{}

void TheaterLights::on()
{
    std::cout << description << " on" << std::endl;
}

void TheaterLights::off()
{
    std::cout << description << " off" << std::endl;
}

void TheaterLights::dim(int level)
{
    std::cout << description << " dimming to " << level << std::endl;
}

} // namespace hfdp::facade