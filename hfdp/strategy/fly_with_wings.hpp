#pragma once

#include "fly_behavior.hpp"

namespace hfdp
{

class fly_with_wings final : public fly_behavior
{
public:
    virtual void fly() const override;
};

} // namespace hfdp