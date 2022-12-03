#pragma once

#include "QuackBehavior.hpp"

namespace hfdp::strategy
{

class MuteQuack final : public QuackBehavior
{
public:
    virtual void quack() const override;
};

} // namespace hfdp::strategy
