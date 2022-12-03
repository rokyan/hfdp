#include "Pizza.hpp"

#include <iostream>

namespace hfdp::abstract_method
{

Pizza::Pizza(const std::string& name, const std::string& dough, const std::string& sauce, const std::vector<std::string>& toppings)
    : name(name)
    , dough(dough)
    , sauce(sauce)
    , toppings(toppings)
{}

void Pizza::prepare()
{
    std::cout << "Prepare " << name << std::endl;
    std::cout << "Tossing dough..." << std::endl;
    std::cout << "Adding sauce..." << std::endl;

    std::cout << "Adding toppings:";

    for (const auto& topping : toppings)
    {
        std::cout << " [" << topping << "]";
    }

    std::cout << std::endl;
}

void Pizza::bake()
{
    std::cout << "Bake for 25 minutes at 180" << std::endl;
}

void Pizza::cut()
{
    std::cout << "Cut the pizza into diagonal slices" << std::endl;
}

void Pizza::box()
{
    std::cout << "Place pizza in official PizzaStore box" << std::endl;
}

const std::string Pizza::getName() const
{
    return name;
}

} // namespace hfdp::abstract_method