#pragma once

namespace hfdp::adapter
{

class Duck
{
public:
    virtual void fly() = 0;
    virtual void quack() = 0;

    virtual ~Duck() = default;
};

} // namespace hfdp::adapter
