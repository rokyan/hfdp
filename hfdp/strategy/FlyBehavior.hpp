#pragma once

namespace hfdp
{

class FlyBehavior
{
public:
    virtual void fly() const = 0;

    virtual ~FlyBehavior() = default;
};

} // namespace hfdp
