#include "FactoryMethodDemo.hpp"
#include "NYPizzaStore.hpp"
#include "ChicagoPizzaStore.hpp"

#include <iostream>

namespace hfdp
{

void FactoryMethodDemo::run() const
{
    using namespace abstract_method;

    NYPizzaStore nyPizzaStore;
    ChicagoPizzaStore chicagoPizzaStore;

    auto pizza = nyPizzaStore.orderPizza("cheese");
    std::cout << "Ordered " << pizza->getName() << std::endl;

    pizza = chicagoPizzaStore.orderPizza("cheese");
    std::cout << "Ordered " << pizza->getName() << std::endl;

    pizza = nyPizzaStore.orderPizza("clam");
    std::cout << "Ordered " << pizza->getName() << std::endl;

    pizza = chicagoPizzaStore.orderPizza("clam");
    std::cout << "Ordered " << pizza->getName() << std::endl;

    pizza = nyPizzaStore.orderPizza("pepperoni");
    std::cout << "Ordered " << pizza->getName() << std::endl;

    pizza = chicagoPizzaStore.orderPizza("pepperoni");
    std::cout << "Ordered " << pizza->getName() << std::endl;

    pizza = nyPizzaStore.orderPizza("veggie");
    std::cout << "Ordered " << pizza->getName() << std::endl;

    pizza = chicagoPizzaStore.orderPizza("veggie");
    std::cout << "Ordered " << pizza->getName() << std::endl;
}

const std::string FactoryMethodDemo::getName() const
{
    return "Factory Method";
}

} // namespace hfdp