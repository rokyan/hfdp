#pragma once

#include "FlyBehavior.hpp"

namespace hfdp::strategy
{

class FlyRocketPowered final : public FlyBehavior
{
public:
    virtual void fly() const override;
};

} // namespace hfdp::strategy
