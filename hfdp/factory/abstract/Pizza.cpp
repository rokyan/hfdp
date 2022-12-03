#include "Pizza.hpp"

#include <iostream>

namespace hfdp::abstract_factory
{

AFPizza::AFPizza(const std::string& name)
    : name(name)
{}


void AFPizza::bake()
{
    std::cout << "Bake for 25 minutes at 350" << std::endl;
}

void AFPizza::cut()
{
    std::cout << "Cutting the pizza into diagonal slices" << std::endl;
}

void AFPizza::box()
{
    std::cout << "Place pizza in official PizzaStore box" << std::endl;
}

const std::string AFPizza::getName() const
{
    return name;
}

} // namespace hfdp::abstract_factory::abstract