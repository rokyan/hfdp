#include "CondimentDecorator.hpp"

namespace hfdp
{

CondimentDecorator::CondimentDecorator(std::unique_ptr<Beverage> beverage)
    : beverage(std::move(beverage))
{}

} // namespace hfdp