#pragma once

#include "Turkey.hpp"

namespace hfdp::adapter
{

class WildTurkey final : public Turkey
{
public:
    virtual void gobble() override;
    virtual void fly() override;
};

} // namespace hfdp::adapter
