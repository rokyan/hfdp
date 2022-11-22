#pragma once

#include <string>

namespace hfdp
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

} // namespace hfdp
