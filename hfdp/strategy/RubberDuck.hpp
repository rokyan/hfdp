#pragma once

#include "Duck.hpp"

namespace hfdp::strategy
{

class RubberDuck final : public Duck
{
public:
    RubberDuck();

    RubberDuck(const RubberDuck& other) = delete;
    RubberDuck& operator=(const RubberDuck& other) = delete;

    RubberDuck(RubberDuck&& other) = delete;
    RubberDuck& operator=(RubberDuck&& other) = delete;

    virtual void display() const override;
};

} // namespace hfdp::strategy
