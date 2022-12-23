#include "MenuItem.hpp"

namespace hfdp::iterator
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

bool MenuItem::isVegetarian() const noexcept
{
    return vegetarian;
}

double MenuItem::getPrice() const noexcept
{
    return price;
}

} // namespace hfdp::iterator