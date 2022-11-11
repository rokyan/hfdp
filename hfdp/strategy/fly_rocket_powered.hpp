#pragma once

#include "fly_behavior.hpp"

namespace hfdp
{

class fly_rocket_powered final : public fly_behavior
{
public:
    virtual void fly() const override;
};

} // namespace hfdp
