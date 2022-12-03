#pragma once

#include <string>

namespace hfdp::command
{

class CeilingFan
{
private:
    enum class Speed { Off, Low, Medium, High };

public:
    CeilingFan(const std::string& location);

    void high();
    void medium();
    void low();
    void off();

private:
    std::string location;
    Speed speed;
};

} // namespace hfdp::command
