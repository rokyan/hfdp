#pragma once

#include <string>

namespace hfdp::command
{

class TV
{
public:
    TV(const std::string& location);

    void on();
    void off();

private:
    std::string location;
};

} // namespace hfdp::command
