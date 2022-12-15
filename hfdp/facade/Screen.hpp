#pragma once

#include "Appliance.hpp"

#include <string>

namespace hfdp::facade
{

class Screen final : public Appliance
{
public:
    Screen(const std::string& description);

    void up();
    void down();
};

} // namespace hfdp::facade
