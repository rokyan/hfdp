#include "DecoratorDemo.hpp"
#include "Espresso.hpp"
#include "DarkRoast.hpp"
#include "Mocha.hpp"
#include "Whip.hpp"
#include "HouseBlend.hpp"
#include "Soy.hpp"

#include <memory>
#include <iostream>

namespace hfdp
{

void DecoratorDemo::run() const
{
    std::unique_ptr<Beverage> beverage = std::make_unique<Espresso>();
    printBeverage(beverage.get());

    std::unique_ptr<Beverage> another_beverage = std::make_unique<DarkRoast>();
    another_beverage = std::move(std::make_unique<Mocha>(std::move(another_beverage)));
    another_beverage = std::move(std::make_unique<Mocha>(std::move(another_beverage)));
    another_beverage = std::move(std::make_unique<Whip>(std::move(another_beverage)));
    printBeverage(another_beverage.get());

    std::unique_ptr<Beverage> one_more_beverage = std::make_unique<HouseBlend>();
    one_more_beverage = std::move(std::make_unique<Soy>(std::move(one_more_beverage)));
    one_more_beverage = std::move(std::make_unique<Mocha>(std::move(one_more_beverage)));
    one_more_beverage = std::move(std::make_unique<Whip>(std::move(one_more_beverage)));
    printBeverage(one_more_beverage.get());
}

void DecoratorDemo::printBeverage(Beverage* beverage) const
{
    std::cout << beverage->getDescription() << " $" << beverage->cost() << std::endl << std::endl;
}

const std::string DecoratorDemo::getName() const
{
    return "Decorator";
}

} // namespace hfdp