#pragma once

#include "QuackBehavior.hpp"

namespace hfdp
{

class Quack final : public QuackBehavior
{
public:
    virtual void quack() const override;
};

} // namespace hfdp
