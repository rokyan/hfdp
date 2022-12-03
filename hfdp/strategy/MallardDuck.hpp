#pragma once

#include "Duck.hpp"

namespace hfdp::strategy
{

class MallardDuck final : public Duck
{
public:
    MallardDuck();

    MallardDuck(const MallardDuck& other) = delete;
    MallardDuck& operator=(const MallardDuck& other) = delete;

    MallardDuck(MallardDuck&& other) = delete;
    MallardDuck& operator=(MallardDuck&& other) = delete;

    virtual void display() const override;
};

} // namespace hfdp::strategy
