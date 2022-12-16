#pragma once

#include "Appliance.hpp"

#include <string>

namespace hfdp::facade
{

class Projector final : public Appliance
{
public:
    Projector(const std::string& description);

    void on();
    void off();

    void wideScreenMode();
    void tvMode();
};

} // namespace hfdp::facade
