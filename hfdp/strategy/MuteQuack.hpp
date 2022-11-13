#pragma once

#include "QuackBehavior.hpp"

namespace hfdp
{

class MuteQuack final : public QuackBehavior
{
public:
    virtual void quack() const override;
};

} // namespace hfdp
