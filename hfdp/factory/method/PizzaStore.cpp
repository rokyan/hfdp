#include "PizzaStore.hpp"

#include <iostream>

namespace hfdp::abstract_method
{

std::unique_ptr<Pizza> PizzaStore::orderPizza(const std::string& item) const
{
    auto pizza = createPizza(item);

    std::cout << "Making a " << pizza->getName() << std::endl;

    pizza->prepare();
    pizza->bake();
    pizza->cut();
    pizza->box();

    std::cout << std::endl;

    return pizza;
}

} // namespace hfdp::abstract_method