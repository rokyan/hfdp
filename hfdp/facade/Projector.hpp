#pragma once

#include <string>

namespace hfdp::facade
{

class Projector
{
public:
    Projector(const std::string& description);

    void on();
    void off();

    void wideScreenMode();
    void tvMode();

private:
    std::string description;
};

} // namespace hfdp::facade
