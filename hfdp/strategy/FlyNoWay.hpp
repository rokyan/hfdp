#pragma once

#include "FlyBehavior.hpp"

namespace hfdp
{

class FlyNoWay final : public FlyBehavior
{
public:
    virtual void fly() const override;
};

} // namespace hfdp