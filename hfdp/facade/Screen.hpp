#pragma once

#include <string>

namespace hfdp::facade
{

class Screen final
{
public:
    Screen(const std::string& description);

    void up();
    void down();

private:
    std::string description;
};

} // namespace hfdp::facade
