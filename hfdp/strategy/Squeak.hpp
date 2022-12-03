#pragma once

#include "QuackBehavior.hpp"

namespace hfdp::strategy
{

class Squeak final : public QuackBehavior
{
public:
    virtual void quack() const override;
};

} // namespace hfdp::strategy
