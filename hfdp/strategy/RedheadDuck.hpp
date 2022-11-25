#pragma once

#include "Duck.hpp"

namespace hfdp::strategy
{

class RedheadDuck final : public Duck
{
public:
    RedheadDuck();

    RedheadDuck(const RedheadDuck& other) = delete;
    RedheadDuck& operator=(const RedheadDuck& other) = delete;

    RedheadDuck(RedheadDuck&& other) = delete;
    RedheadDuck& operator=(RedheadDuck&& other) = delete;

    virtual void display() const override;
};

} // namespace hfdp::strategy
