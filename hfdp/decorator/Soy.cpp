#include "Soy.hpp"

namespace hfdp
{

Soy::Soy(std::unique_ptr<Beverage> beverage)
    : CondimentDecorator(std::move(beverage))
{}

const std::string Soy::getDescription() const noexcept
{
    return beverage->getDescription() + ", Soy";
}

double Soy::cost() const noexcept
{
    return beverage->cost() + .15;
}

} // namespace hfdp