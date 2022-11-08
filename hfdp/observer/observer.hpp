#pragma once

namespace hfdp
{

class observer
{
public:
    virtual void update(double temperature, double humidity, double pressure) = 0;

    virtual ~observer() = default;
};

} // namespace hfdp