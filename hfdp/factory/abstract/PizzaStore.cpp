#include "PizzaStore.hpp"

#include <iostream>

namespace hfdp::abstract_factory
{

std::unique_ptr<Pizza> PizzaStore::orderPizza(const std::string& type)
{
    auto pizza = createPizza(type);

    std::cout << "Making a " << pizza->getName() << std::endl;

    pizza->prepare();
    pizza->bake();
    pizza->cut();
    pizza->box();

    return pizza;
}

} // namespace hfdp::abstract_factory