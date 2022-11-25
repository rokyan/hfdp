#pragma once

namespace hfdp::strategy
{

class QuackBehavior
{
public:
    virtual void quack() const = 0;

    virtual ~QuackBehavior() = default;
};

} // namespace hfdp::strategy