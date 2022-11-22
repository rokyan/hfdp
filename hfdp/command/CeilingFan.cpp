#include "CeilingFan.hpp"

#include <iostream>

namespace hfdp
{

CeilingFan::CeilingFan(const std::string& location)
    : location(location)
    , speed(Speed::Off)
{}

void CeilingFan::high()
{
    speed = Speed::High;

    std::cout << location << " ceiling fan is on high" << std::endl;
}

void CeilingFan::medium()
{
    speed = Speed::Medium;

    std::cout << location << " ceiling fan is on high" << std::endl;
}

void CeilingFan::low()
{
    speed = Speed::Low;

    std::cout << location << " ceiling fan is on low" << std::endl;
}

void CeilingFan::off()
{
    speed = Speed::Off;

    std::cout << location << " ceiling fan is off" << std::endl;
}

} // namespace hfdp