#pragma once

namespace hfdp::observer
{

class Observer
{
public:
    virtual void update(double temperature, double humidity, double pressure) = 0;

    virtual ~Observer() = default;
};

} // namespace hfdp::observer