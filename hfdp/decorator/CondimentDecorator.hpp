#pragma once

#include "beverage.hpp"

#include <memory>

namespace hfdp
{

class CondimentDecorator : public Beverage
{
public:
    CondimentDecorator(std::unique_ptr<Beverage> _beverage);

protected:
    std::unique_ptr<Beverage> beverage;
};

} // namespace hfdp
