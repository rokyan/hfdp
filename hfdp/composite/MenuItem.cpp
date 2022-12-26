#include "MenuItem.hpp"

#include <iostream>

namespace hfdp::composite
{

MenuItem::MenuItem(const std::string& name, const std::string& description,
    bool vegetarian, double price)
    : name(name)
    , description(description)
    , vegetarian(vegetarian)
    , price(price)
{}

const std::string& MenuItem::getName() const
{
    return name;
}

const std::string& MenuItem::getDescription() const
{
    return description;
}

bool MenuItem::isVegetarian() const
{
    return vegetarian;
}

double MenuItem::getPrice() const
{
    return price;
}

void MenuItem::print() const
{
    std::cout << name;

    if (vegetarian)
    {
        std::cout << " (v)";
    }

    std::cout << ", " << price << " -- " << description << std::endl;
}

} // namespace hfdp::composite