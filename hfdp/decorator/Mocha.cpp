#include "Mocha.hpp"

namespace hfdp::decorator
{

Mocha::Mocha(std::unique_ptr<Beverage> beverage)
    : CondimentDecorator(std::move(beverage))
{}

const std::string Mocha::getDescription() const noexcept
{
    return beverage->getDescription() + ", Mocha";
}


double Mocha::cost() const noexcept
{
    return beverage->cost() + .20;
}

} // namespace hfdp::decorator