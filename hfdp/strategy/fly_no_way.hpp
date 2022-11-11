#pragma once

#include "fly_behavior.hpp"

namespace hfdp
{

class fly_no_way final : public fly_behavior
{
public:
    virtual void fly() const override;
};

} // namespace hfdp