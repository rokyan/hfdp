#pragma once

#include "Appliance.hpp"

#include <string>

namespace hfdp::facade
{

class TheaterLights final : public Appliance
{
public:
    TheaterLights(const std::string& description);

    void on();
    void off();
    void dim(int level);
};

} // namespace hfdp::facade
