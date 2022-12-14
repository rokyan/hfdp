#include "Projector.hpp"

#include <iostream>

namespace hfdp::facade
{

Projector::Projector(const std::string& description)
    : description(description)
{}

void Projector::on()
{
    std::cout << description << " " << "on" << std::endl;
}

void Projector::off()
{
    std::cout << description << " " << "off" << std::endl;
}

void Projector::wideScreenMode()
{
    std::cout << description << " " << "in widescreen mode (16x9 aspect ratio)" << std::endl;
}

void Projector::tvMode()
{
    std::cout << description << " " << "in tv mode (4x3 aspect ratio)" << std::endl;
}

} // namespace hfdp::facade