#include "Whip.hpp"

namespace hfdp::decorator
{

Whip::Whip(std::unique_ptr<Beverage> beverage)
    : CondimentDecorator(std::move(beverage))
{}

const std::string Whip::getDescription() const noexcept
{
    return beverage->getDescription() + ", Whip";
}

double Whip::cost() const noexcept
{
    return beverage->cost() + .10;
}

} // namespace hfdp::decorator