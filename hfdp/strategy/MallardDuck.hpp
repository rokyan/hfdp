#pragma once

#include "Duck.hpp"

namespace hfdp
{

class MallardDuck final : public Duck
{
public:
    MallardDuck();

    virtual void display() const override;
};

} // namespace hfdp
