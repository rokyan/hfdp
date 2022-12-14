#pragma once

#include <string>

namespace hfdp::facade
{

class PopcornPopper final
{
public:
    PopcornPopper(const std::string& description);

    void on();
    void off();
    void pop();

private:
    std::string description;
};

} // namespace hfdp::facade
