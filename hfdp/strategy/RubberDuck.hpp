#pragma once

#include "Duck.hpp"

namespace hfdp
{

class RubberDuck final : public Duck
{
public:
    RubberDuck();

    virtual void display() const override;
};

} // namespace hfdp
