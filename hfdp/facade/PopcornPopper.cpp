#include "PopcornPopper.hpp"

#include <iostream>

namespace hfdp::facade
{

PopcornPopper::PopcornPopper(const std::string& description)
    : description(description)
{}

void PopcornPopper::on()
{
    std::cout << description << " " << "on" << std::endl;
}

void PopcornPopper::off()
{
    std::cout << description << " " << "off" << std::endl;
}

void PopcornPopper::pop()
{
    std::cout << description << " " << "popping popcorn!" << std::endl;
}

} // namespace hfdp::facade