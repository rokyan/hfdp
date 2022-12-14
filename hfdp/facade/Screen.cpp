#include "Screen.hpp"

#include <iostream>

namespace hfdp::facade
{

Screen::Screen(const std::string& description)
    : description(description)
{}

void Screen::up()
{
    std::cout << description << " going up" << std::endl;
}

void Screen::down()
{
    std::cout << description << " going down" << std::endl;
}

} // namespace hfdp::facade