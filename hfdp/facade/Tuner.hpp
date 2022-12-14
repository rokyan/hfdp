#pragma once

#include <string>

namespace hfdp::facade
{

class Tuner final
{
public:
    Tuner(const std::string& description);

    void on();
    void off();

    void setFrequency(double frequency);

    void setAm();
    void setFm();

private:
    std::string description;
    double frequency;
};

} // namespace hfdp::facade
