#include "CondimentDecorator.hpp"

namespace hfdp::decorator
{

CondimentDecorator::CondimentDecorator(std::unique_ptr<Beverage> beverage)
    : beverage(std::move(beverage))
{}

} // namespace hfdp::decorator