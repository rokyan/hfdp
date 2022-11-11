#pragma once

namespace hfdp
{

class fly_behavior
{
public:
    virtual void fly() const = 0;

    virtual ~fly_behavior() = default;
};

} // namespace hfdp
