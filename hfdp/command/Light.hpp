#pragma once

#include <string>

namespace hfdp::command
{

class Light
{
public:
    Light(const std::string& location);

    void on();
    void off();

private:
    std::string location;
};

} // namespace hfdp::command
