#pragma once

namespace hfdp
{

class QuackBehavior
{
public:
    virtual void quack() const = 0;

    virtual ~QuackBehavior() = default;
};

} // namespace hfdp