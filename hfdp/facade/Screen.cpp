#include "Screen.hpp"

namespace hfdp::facade
{

Screen::Screen(const std::string& description)
    : Appliance(description)
{}

void Screen::up()
{
    print("going up");
}

void Screen::down()
{
    print("going down");
}

} // namespace hfdp::facade