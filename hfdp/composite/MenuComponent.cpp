#include "MenuComponent.hpp"

#include <stdexcept>

namespace hfdp::composite
{

void MenuComponent::add(std::unique_ptr<MenuComponent> component)
{
    throw std::runtime_error("Operation is not supported");
}

void MenuComponent::remove(MenuComponent* component)
{
    throw std::runtime_error("Operation is not supported");
}

MenuComponent* MenuComponent::get(std::size_t idx)
{
    throw std::runtime_error("Operation is not supported");
}

const std::string& MenuComponent::getName() const
{
    throw std::runtime_error("Operation is not supported");
}

const std::string& MenuComponent::getDescription() const
{
    throw std::runtime_error("Operation is not supported");
}

double MenuComponent::getPrice() const
{
    throw std::runtime_error("Operation is not supported");
}

bool MenuComponent::isVegetarian() const
{
    throw std::runtime_error("Operation is not supported");
}

void MenuComponent::print() const
{
    throw std::runtime_error("Operation is not supported");
}

} // namespace hfdp::composite