#include "AbstractFactoryDemo.hpp"
#include "NYPizzaStore.hpp"

#include <memory>
#include <utility>
#include <iostream>

namespace hfdp
{

void AbstractFactoryDemo::run() const
{
    using namespace abstract_factory;

    auto nyPizzaStore = std::make_unique<NYPizzaStore>();

    auto pizza = nyPizzaStore->orderPizza("cheese");
    std::cout << "Ordered a " << pizza->getName() << std::endl;

    pizza = std::move(nyPizzaStore->orderPizza("clam"));
    std::cout << "Ordered a " << pizza->getName() << std::endl;

    pizza = std::move(nyPizzaStore->orderPizza("pepperoni"));
    std::cout << "Ordered a " << pizza->getName() << std::endl;

    pizza = std::move(nyPizzaStore->orderPizza("veggie"));
    std::cout << "Ordered a " << pizza->getName() << std::endl;
}

const std::string AbstractFactoryDemo::getName() const
{
    return "Abstract Factory";
}

} // namespace hfdp