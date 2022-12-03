#include "Pizza.hpp"

#include <iostream>

namespace hfdp::abstract_factory
{

Pizza::Pizza(const std::string& name)
    : name(name)
{}


void Pizza::bake()
{
    std::cout << "Bake for 25 minutes at 350" << std::endl;
}

void Pizza::cut()
{
    std::cout << "Cutting the pizza into diagonal slices" << std::endl;
}

void Pizza::box()
{
    std::cout << "Place pizza in official PizzaStore box" << std::endl;
}

const std::string Pizza::getName() const
{
    return name;
}

} // namespace hfdp::abstract_factory::abstract