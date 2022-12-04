#pragma once

namespace hfdp::adapter
{

class Turkey
{
public:
    virtual void gobble() = 0;
    virtual void fly() = 0;

    virtual ~Turkey() = default;
};

} // namespace hfdp::adapter
