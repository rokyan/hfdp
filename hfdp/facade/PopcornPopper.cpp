#include "PopcornPopper.hpp"

namespace hfdp::facade
{

PopcornPopper::PopcornPopper(const std::string& description)
    : Appliance(description)
{}

void PopcornPopper::on()
{
    print("on");
}

void PopcornPopper::off()
{
    print("off");
}

void PopcornPopper::pop()
{
    print("popping popcorn!");
}

} // namespace hfdp::facade