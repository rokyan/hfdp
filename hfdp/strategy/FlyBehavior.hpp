#pragma once

namespace hfdp::strategy
{

class FlyBehavior
{
public:
    virtual void fly() const = 0;

    virtual ~FlyBehavior() = default;
};

} // namespace hfdp::strategy
