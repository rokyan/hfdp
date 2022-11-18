#include "Light.hpp"

#include <iostream>

namespace hfdp
{

Light::Light(const std::string& location)
    : location(location)
{}

void Light::on()
{
    std::cout << location << " light is on" << std::endl;
}

void Light::off()
{
    std::cout << location << " light is off" << std::endl;
}

} // namespace hfdp