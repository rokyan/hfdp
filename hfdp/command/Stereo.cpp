#include "Stereo.hpp"

#include <iostream>

namespace hfdp
{

Stereo::Stereo(const std::string& location)
    : location(location)
{}

void Stereo::on()
{
    std::cout << location << " stereo is on" << std::endl;
}

void Stereo::off()
{
    std::cout << location << " stereo is off" << std::endl;
}

void Stereo::setCD()
{
    std::cout << location << " stereo is set for CD input" << std::endl;
}

void Stereo::setDVD()
{
    std::cout << location << " stereo is set for DVD input" << std::endl;
}

void Stereo::setRadio()
{
    std::cout << location << " stereo is set for radio" << std::endl;
}

void Stereo::setVolume(int volume)
{
    std::cout << location << " stereo volume is set to " << volume << std::endl;
}

} // namespace hfdp