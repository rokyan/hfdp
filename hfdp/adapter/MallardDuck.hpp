#pragma once

#include "Duck.hpp"

namespace hfdp::adapter
{

class MallardDuck final : public Duck
{
public:
    virtual void fly() override;
    virtual void quack() override;
};

} // namespace hfdp::adapter
