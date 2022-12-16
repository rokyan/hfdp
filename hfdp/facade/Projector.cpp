#include "Projector.hpp"

namespace hfdp::facade
{

Projector::Projector(const std::string& description)
    : Appliance(description)
{}

void Projector::on()
{
    print("on");
}

void Projector::off()
{
    print("on");
}

void Projector::wideScreenMode()
{
    print("in widescreen mode (16x9 aspect ratio)");
}

void Projector::tvMode()
{
    print("in tv mode (4x3 aspect ratio)");
}

} // namespace hfdp::facade