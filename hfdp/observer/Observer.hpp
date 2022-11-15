#pragma once

namespace hfdp
{

class Observer
{
public:
    virtual void update(double temperature, double humidity, double pressure) = 0;

    virtual ~Observer() = default;
};

} // namespace hfdp