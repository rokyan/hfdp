#include "Tuner.hpp"

#include <iostream>

namespace hfdp::facade
{

Tuner::Tuner(const std::string& description)
    : description(description)
{}

void Tuner::on()
{
    std::cout << description << " on" << std::endl;
}

void Tuner::off()
{
    std::cout << description << " off" << std::endl;
}

void Tuner::setFrequency(double frequency)
{
    std::cout << description << " setting frequency to " << frequency;

    this->frequency = frequency;
}

void Tuner::setAm()
{
    std::cout << description << " setting AM mode" << std::endl;
}

void Tuner::setFm()
{
    std::cout << description << " setting FM mode" << std::endl;
}

} // namespace hfdp::facade