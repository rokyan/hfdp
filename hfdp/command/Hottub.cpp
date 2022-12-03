#include "Hottub.hpp"

#include <iostream>

namespace hfdp::command
{

Hottub::Hottub()
    : isOn(false)
{}

void Hottub::on()
{
    isOn = true;

    std::cout << "Hottub is on" << std::endl;
}

void Hottub::off()
{
    isOn = true;

    std::cout << "Hottub is off" << std::endl;
}

} // namespace hfdp::command