#include "Tuner.hpp"

namespace hfdp::facade
{

Tuner::Tuner(const std::string& description)
    : Appliance(description)
{}

void Tuner::on()
{
    print("on");
}

void Tuner::off()
{
    print("off");
}

void Tuner::setFrequency(double frequency)
{
    print("setting frequency to", frequency);

    this->frequency = frequency;
}

void Tuner::setAm()
{
    print("setting AM mode");
}

void Tuner::setFm()
{
    print("setting FM mode");
}

} // namespace hfdp::facade