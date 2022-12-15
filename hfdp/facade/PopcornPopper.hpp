#pragma once

#include "Appliance.hpp"

#include <string>

namespace hfdp::facade
{

class PopcornPopper final : public Appliance
{
public:
    PopcornPopper(const std::string& description);

    void on();
    void off();
    void pop();
};

} // namespace hfdp::facade
