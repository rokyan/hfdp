#pragma once

#include <string>

namespace hfdp::facade
{

class TheaterLights final
{
public:
    TheaterLights(const std::string& description);

    void on();
    void off();
    void dim(int level);

private:
    std::string description;
};

} // namespace hfdp::facade
