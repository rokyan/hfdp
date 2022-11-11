#pragma once

namespace hfdp
{

class quack_behavior
{
public:
    virtual void quack() const = 0;

    virtual ~quack_behavior() = default;
};

} // namespace hfdp