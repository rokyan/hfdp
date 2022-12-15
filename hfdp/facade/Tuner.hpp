#pragma once

#include "Appliance.hpp"

#include <string>

namespace hfdp::facade
{

class Tuner final : public Appliance
{
public:
    Tuner(const std::string& description);

    void on();
    void off();

    void setFrequency(double frequency);

    void setAm();
    void setFm();

private:
    double frequency;
};

} // namespace hfdp::facade
